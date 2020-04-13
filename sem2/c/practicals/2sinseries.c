#include <stdio.h>
#include <math.h>
float factorial(float n);

int main(){
int p,i,counter=0;
float  n,r;
float pi=3.14,deg,result=0,rad,odd,x;
printf("Enter angle in degree : ");
scanf("%f" , &deg);
rad = (pi/180) * deg;

for(i=1;i<=10;i=i+2){
x = pow(rad,i);



result = result +( (x/factorial(i)) * pow(-1,counter));
//p = i;
//p = p%2;
//printf("Fac : %f %f \n" , factorial(i) , x);
/* printf("Factorial : %f \n" , factorial(1));
printf("Radian : %f " , rad); */
//printf("power : %f \n" , pow(-1,(i%2)+1));

counter++;
}

printf("the sin is : %f" , result);
}

float factorial(float n){
if(n==1)
return 1.0;
else
return n*factorial(n-1);


}
