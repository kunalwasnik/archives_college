#include <stdio.h>

void carea(int *a , int radi);
int main(){
int area , perimeter ,radi, *r;
printf("Area and Perimeter Calculator \n");

printf("Enter radius of circle : ");
scanf("%d" , &radi);

r = &radi;

carea(&area , radi);
printf("Area is %d" , area);
}


void carea(int *a,int radi){
*a = 3.14*radi;
}
