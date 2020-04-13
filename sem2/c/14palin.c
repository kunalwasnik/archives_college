#include <stdio.h>

int main(){
int i;

char sen[100];
int len,r=0;
printf("Enter a word ");
scanf("%s" , &sen);
len = strlen(sen)-1;

for(i=0;i<=len/2;i++){

//printf("\n checking %c and %c" , sen[i] , sen[len]);
    if(sen[i] == sen[len]){
    r=1;

    }else{
    r=0;
    }
      len--;

}
if(r==0){
printf("not palindrome");
}else{
    printf("Word is palindrome");
}





}
