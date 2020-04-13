#include <stdio.h>

int main(){

int nrows , i ,row , alpha,space,counter=64;
scanf("%d" , &nrows);

for(row=1;row<=nrows;row++){

    for(space = nrows-row; space>=1;space--){
        printf("  ");
    }

    for(alpha=row;alpha>=1;alpha--){
        printf("%c " , counter+alpha);


    }
    counter = counter+row;
    printf("\n");



}



}
