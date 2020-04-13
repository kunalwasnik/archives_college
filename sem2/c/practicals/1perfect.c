#include <stdio.h>
#include <math.h>

int main(){
float n , r;
int i,p;

printf("Enter a number > ");
scanf("%f" , &n);
r = sqrt(n);
i = r;


if(i==r)
printf("Perfect square %f" ,r);
else
printf("Not a perfect square %f" , r);




}
