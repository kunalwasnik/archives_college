#include <stdio.h>
#include <string.h>


int main(){
int l,p=1;
char s[100];
printf("Enter string : ");
scanf("%s" , s);
l = strlen(s);

for(int i=0;i<l/2;i++){
    if(s[i]!=s[l-i-1]){
        p=0;
        break;
    }

}
printf("The %s is ",s );

if(p==1){
printf("Palindrome");
}else{
printf("Not a palindrome");
}

}
