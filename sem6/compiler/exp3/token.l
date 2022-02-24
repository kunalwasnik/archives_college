%{
#include "y.tab.h"
%}

%%
[a-zA-Z] {return ALPHA;}
[0-9]+ {yyval=return NUM;}
[\n] {return '\n';}
. {return yytext[0];}
%%