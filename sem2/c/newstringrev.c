#include <stdio.h>

int main(){
int i,j=0;


char sen[100] ,rev[100];
int len=0,r=0;
printf("Enter a string:");
scanf("%[^\n]" , sen);



while(sen[len]!='\0'){

len++;
}

printf("%d" , strlen(sen));
}

