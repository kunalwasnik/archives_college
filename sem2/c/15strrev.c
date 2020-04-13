#include <stdio.h>

int main(){
int i,j=0;


char sen[100] ,rev[100];
int len,r=0;
printf("Enter a word:");
scanf("%[^\n]" , sen);
len = strlen(sen)-1;


for(i=len;i>=0;i--){

    rev[j] = sen[i];
    j++;

}
rev[j]='\0';
printf("The reversed string : %s" , rev);

}

