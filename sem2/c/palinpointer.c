#include <stdio.h>

void check(char *w);
int main(){
char word[100];

printf("Enter a word :");
scanf("%s" , word);
check(word);
}

void check(char *w ){
int i;
int len,pal=1;
len = strlen(w)-1;

for(i=0;i<=len/2;i++){

        if(w[i]!= w[len])
        pal=0;
        len--;
}

if(pal==1)
printf("String is palindrome ");
else
printf("String is not palindrome");
}
