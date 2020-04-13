#include <stdio.h>
#include <stdlib.h>

int main(){
int i , j , k,nrows,spaces,row,counter=1;
char ch=65;

printf("Type number of rows and press enter : ");
scanf("%d" , &nrows);

for(row=1;row<=nrows;row++){
    for(j=nrows-row;j>=0;j--){
        printf("*   ");

    }

    printf("\n");



}


}

