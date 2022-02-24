%{
#include "y.tab.h"
;
%}

%%
[a-zA-Z] {yylval.character=yytext[0];return ALPHA;}
[0-9]+ {yylval.integer=atoi(yytext);return NUM;}
[\n] {}
. {return yytext[0];}
%%