#include <stdio.h>

void join(char s[] , char k[]);


int main(){
char os[100] = {"I Love "} , js[100];


printf("Enter string to be joined to  \"%s\" " , os);
scanf("%s" , &js);

join(os , js);

printf("The joined string is %s" , os);
}


join (char s[], char k[]){
int i=0;
int len;
len = strlen(s);

while(k[i]!='\0'){
s[len] = k[i];
len++;
i++;
}
s[len] = '\0';


}
