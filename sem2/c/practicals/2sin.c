#include <stdio.h>
#include <math.h>

int main(){

float deg , val,si;

float pi = 3.141;

printf("Angle in degree = ");
scanf("%f" , &deg);
val = pi/180;

si = sin((val*deg));

printf("The sin of angle is : %f" , si);



}
