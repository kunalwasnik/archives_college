#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char ch , text[30],len;
    int cip,i,j;

    printf("Enter cipher digit : ");
    scanf("%d" , &cip);

    printf("Enter your normal text\n");
    scanf(" %[^\n]", text);

    len = strlen(text);


     for(i=0;i<cip;i++){
                for(j=0;j<len;j++){

                    ch = text[j];
                    if(ch!=' '){


                    if(ch=='Z'){
                        text[j] = 'A';
                    }else{
                        text[j]++;
                    }
                    }
        }
    }

    printf("\nEncrypted string %s" , text);



}
