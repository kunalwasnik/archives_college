
%{
/*** Auxiliary declarations section ***/

#include<stdio.h>
#include<stdlib.h>
#include <ctype.h>


%}

 /*** YACC Declarations section ***/
%token DIGIT ALPHA
%left '+' '-'
%left '*' '/'
%%

/*** Rules Section ***/
start : e '\n'		{printf("Expression is valid");exit(1);}
      ;

e: e '+' e     
    | e '*' e     
    | e '/' e
    | e '-' e
    | '(' e ')' 
    | DIGIT        
    ;

%%


/*** Auxiliary functions section ***/



yyerror()
{
    printf("Expression is invalid");
}

yylex(){

    char c;
    c = getchar();
    if(isdigit(c)){
        return DIGIT;
    }
    else if(c == ' '){
        yylex();         /*This is to ignore whitespaces in the input*/
    }
    else {
        return ALPHA;
    }



}

int main()
{
	yyparse();
	return 1;
}