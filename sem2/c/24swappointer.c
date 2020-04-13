#include <stdio.h>

void swap(int *a , int *b);

int main(){
int r=80 , s=30;

printf("Earlier marks of Ram %d\n" , r);
printf("Earlier marks of Shyam %d\n" , s);

swap(&r , &s);


printf("After swapping marks of Ram %d\n" , r);
printf("After swapping marks of Shyam %d\n" , s);
}
void swap(int *a , int *b){
int temp;

temp = *a;
*a = *b;
*b = temp;


}
