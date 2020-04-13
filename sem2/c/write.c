#include <stdio.h>
int main(){

    FILE *fp , *fcopy;
    char s[100];


    fp = fopen("secret.txt" ,  "w");

    printf("Enter string to be written : ");
    scanf("%[^\n]" ,s);
    fprintf(fp,s);

    fclose(fp);

    // reading

    fp = fopen("secret.txt" ,  "r");
    fcopy = fopen("copy.txt" ,"w");
    char ch;
    while((ch=getc(fp)) !=EOF){

        fputc(ch , fcopy);


    }


}
