#include <stdio.h>
#include <stdlib.h>

int main(){
int i , j , k,rows,spaces;
char ch=65;

printf("Type number of rows and press enter : ");
scanf("%d" , &rows);

for(i=0;i<rows;i++){

    for(spaces=rows-i-1;spaces>=1;spaces--){
        printf(" ");
    }

    for(k=0;k<=i;k++){
    printf("%c" , ch+k);
    }



    printf("\n");



}


}

