#include <stdio.h>

int main(){
int i=5;
int *p = &i;
int *j;
j = &i;

printf("%d ...%d" , p , j);



}
