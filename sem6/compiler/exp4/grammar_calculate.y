
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
start : e '\n'      {printf("Expression Result : %d\n" ,$$);return 0;}
      ;

e: e '=' e  
    |e '+' e {$$=$1+$3;}
    | e '*' e {$$=$1*$3;}     
    | e '/' e {$$=$1/$3;}
    | e '-' e {$$=$1-$3;}
    | '(' e ')' {$$=$2;}
    | NUM {$$=$1;}      
    ;

%%


/*** Auxiliary functions section ***/



int yyerror()
{
    printf("Expression is invalid");
}


int main()
{
    printf("Enter arithmetic expression\n");
    yyparse();
    return 0;
}