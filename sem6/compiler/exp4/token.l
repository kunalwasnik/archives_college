%{
#include "y.tab.h"
extern int yylval;
%}

%%
[a-zA-Z] {return ALPHA;}
[0-9]+ {yylval = atoi(yytext);return NUM;}
[\n] {return '\n';}
. {return yytext[0];}
%%