#include <stdio.h>
#include <string.h>

void copy(char s[] , char d[]);
void compare(char d[] , char f[]);


int main(){


char src[100]={"Hello World"} , cs[100]={"Hello World"};
/*
printf("Enter string to be copied : ");
scanf("%[^\n]" ,cs);


 printf(" Before copying : %s\n" , src);
copy(src , cs);

printf(" After copying : %s" , src);

*/
compare(src , cs);

}


void copy(char s[] , char d[]){
int i=0;

    while(d[i] !='\0'){
        s[i] = d[i];
   i++;
    }
s[i] = '\0';


}

void compare(char a[] , char b[]){
int pos=0, eq=1;


    while(a[pos]!='\0' && b[pos] !='\0'){

            if(a[pos]!=b[pos]){
                eq = 0;
                break;
            }

         pos++;
    }

 if(a[pos] == '\0'  && b[pos] == '\0' && eq==1){
 printf("Strings are equal.");
 }else{
 printf("Strings are not equal.");
 }



}
