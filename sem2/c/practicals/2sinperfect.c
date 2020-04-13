#include <stdio.h>
#include <math.h>

int main(){
int i,j,counter=0;
float x=1 , deg , pi=3.141,rad,fac=1,sin=0;

printf("Enter angle in degree : ");
scanf("%f" ,&deg);

rad = (pi/180) * deg;

for(i=1;i<=5;i+=2){
fac=1;
x=rad;

    for(j=1;j<=i;j++){
    fac = fac*j;
    }
    x =pow(x,i);

    sin = sin + ((x/fac) * pow(-1,counter));
   //printf("PoweR : %f %f\n" ,fac,x);
    counter++;

}

printf("The value of sin %f is %f" , deg , sin);




}
