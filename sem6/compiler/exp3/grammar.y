
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
%left '='
%%


/*** Rules Section ***/
start : e '\n'      {printf("\nValid Arithmetic Expression.\n\n");exit(1);}
      ;

e: e '=' e  
    |e '+' e 
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
    printf("\nEnter arithmetic expression\n");
    yyparse();
    return 0;
}