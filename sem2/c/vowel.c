#include <stdio.h>

int main()
{
char ch;
printf("Enter a character : ");
scanf("%c" , &ch);

    switch(ch){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("%c is vowel " ,ch );
            break;
        default :
        printf("Not a vowel ");
        break;

    }

}
