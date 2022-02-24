
%{
/*** Auxiliary declarations section ***/

#include<stdio.h>
#include<stdlib.h>
#include <ctype.h>

int yylex();
int yyerror();

%}

 /*** YACC Declarations section ***/
%token NUM ALPHA
%left '+' '-'
%left '*' '/'
%%

/*** Rules Section ***/
start : e '\n'		{printf("Valid Arithmetic Expression.");exit(1);}
      ;

e: e '+' e     
    | e '*' e     
    | e '/' e
    | e '-' e
    | '(' e ')' 
    | NUM
    | ALPHA        
    ;

%%


/*** Auxiliary functions section ***/



int yyerror()
{
    printf("Expression is invalid");
}


int main()
{
    printf("Enter arithmetic expression");
	yyparse();
	return 0;
}