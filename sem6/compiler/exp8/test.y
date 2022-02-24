%{
#include
int yylex(void);
char p='A'-1;
%}
%union
{
char dval;
}
%token NUM
%left '+' '-'
%left '*' '/'
%nonassoc UMINUS
%type S
%type E
%%
S : E {printf(" x = %cn",$$);}
;
E : NUM {}
| E ‘+’ E {p++;printf("n %c = %c + %c ",p,$1,$3);$$=p;}
| E ‘-‘ E {p++;printf("n %c = %c – %c ",p,$1,$3);$$=p;}
| E ‘*’ E {p++;printf("n %c = %c * %c ",p,$1,$3);$$=p;}
| E ‘/’ E {p++;printf("n %c = %c / %c ",p,$1,$3);$$=p;}
| ‘(‘E’)’ {$$=p;}
| ‘-‘ E %prec UMINUS {p++;printf("n %c = -%c ",p,$2);$$=p;}
;
%%