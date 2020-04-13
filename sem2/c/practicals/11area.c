#include <stdio.h>
#include <math.h>
int main(){
float area , a ,b ,c;

printf("Enter sides of triangle : ");
scanf("%f %f %f" , &a , &b , &c);
float s = (a+b+c)/2;
area = sqrt(s*(s-a)*(s-b)*(s-c));
printf("Area : %f" ,area);

}
