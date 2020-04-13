#include <stdio.h>
#include <string.h>



int main(){
char s[100];
int  m , end,r=1,i;
printf("Enter a string : ");
scanf("%s" ,s);
end = strlen(s)-1;


for(i=0;i<strlen(s)/2;i++){
    if(s[i]!=s[end]){
    r=0;
    break;
    }

end--;
}

if(r==1)
printf("Palindrome");
else
printf("Not a palindrome");




}
