
%{
/*** Auxiliary declarations section ***/


#include<stdio.h>
#include<stdlib.h>
#include <ctype.h>



int yylex();
int yyerror();
int t=0;
char p = 'A'-1;
%}


%union 
{
       char character;
       int integer;
}


 /*** YACC Declarations section ***/
%token NUM 
%token ALPHA

%type <character> ALPHA
%type <integer> NUM



%left '+' '-'
%left '*' '/'
%left '='
%type <integer> e
%type <integer> start
%%


/*** Rules Section ***/
start : e
        | start e
        
      ;

e:   e'=' e '+' e {p++;

          //  printf("%c = %c + %c\n\n",p,$3,$5);$$=p;

            printf("mov %c ,r%c\n" , $<character>3 , p);
            printf("add %c , r%c\n" , $<character>5 , p);

            }
    | e'='  e '*' e {

        p++;
      //  p++;printf("%c = %c * %c\n" , p , $1 ,$3 );$$=p;

            printf("mov %c ,r%c\n" , $3 , p);
            printf("mul %c , r%c\n" , $5 , p);
        }   

    | e'='  e '/' e {
    p++;

      //  p++;printf("%c = %c / %c\n" , p , $1 ,$3 );$$=p;

            printf("mov %c ,r%c\n" , $3 , p);
            printf("div %c , r%c\n" , $5 , p);

        }

    | e'='  e '-' e {
    p++;

       // p++;printf("%c = %c - %c\n" , p , $1 ,$3 );$$=p;

            printf("mov %c ,r%c\n" , $3 , p);
            printf("sub %c , r%c\n" , $5 , p);

        }


    | '(' e ')' {$$=$2;}
    | NUM {$$ = $$ + '0'; } 
    | ALPHA {$$=$1;}      
        
    ;

%%


/*** Auxiliary functions section ***/



int yyerror()
{
    //printf("Expression is invalid");
}


int main()
{
    printf("Enter three address code\n");
    yyparse();
    return 0;
}