#include <stdio.h>

void swap(int *a , int *b);


int main(){

int a , b;

printf("Entert two numbers : ");
scanf("%d %d" , &a , &b);

swap(&a , &b);


printf("After swapping : %d %d" , a ,b);

}

void swap(int *a , int *b){
int temp;
temp = *a;
*a = *b;
*b = temp;



}
