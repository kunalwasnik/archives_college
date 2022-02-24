
	
/*
Write a program to count number of characters, words, sentences, lines, tabs, numbers
and blank spaces present in input using LEX

*/	


%{
#include<stdio.h>
#include <ctype.h>
int i=0;
%}



%%

 
[a-z]+d$  { 
			i=0;
		while( yytext[i]!='\0' )

			{
		
			printf("%c" , toupper(yytext[i]));
				i++; 
			}

		 }





%%
int main(void)
{

yylex();


}
 
