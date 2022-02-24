
	
/*
Write a program to count number of characters, words, sentences, lines, tabs, numbers
and blank spaces present in input using LEX

*/	


%{
#include<stdio.h>
int lines=0, words=0,s_letters=0,c_letters=0, num=0, characters=0,total=0,tabs=0,spaces=0,exc=0;
%}


%%


 
\n  lines++;
([ ])+ spaces++;

\t 		tabs++;
[A-Z] c_letters++;
[a-z] s_letters++;
[0-9] num++;
. characters++;



%%
int main(void)
{

yylex();
total=s_letters+c_letters+num+characters;
printf(" This text contains ...");
printf("\n\t%d lines", lines);
printf("\n\t%d tabs",tabs);
printf("\n\t%d small letters", s_letters);
printf("\n\t%d capital letters",c_letters);
printf("\n\t%d digits", num);
printf("\n\t%d special characters",characters);
printf("\n\t%d spaces" , spaces);
//printf("\n\tIn total %d characters.\n",total);

}
 
