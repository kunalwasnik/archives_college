#include <stdio.h>
#include <ctype.h>
#include <string.h>


int main(){
char sen[100];
char ch;
int i , vow=0, con=0;

printf("Enter a sentence : ");
scanf("%s" , &sen);
for(i=0;i<=strlen(sen)-1;i++)
{
    ch = tolower(sen[i]);
    //printf("\n Currently Checking .... %c" , ch);
    if(ch=='a' || ch == 'e'|| ch == 'i'  || ch == 'o'  || ch == 'u'  ){
     vow++;
    }else{
       // printf("here");
    con++;
    }
}

printf("There %d vowels and %d consonents in the sentence." , vow , con);

}
