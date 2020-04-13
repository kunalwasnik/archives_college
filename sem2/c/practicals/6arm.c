#include <stdio.h>
#include <math.h>
int main(){
int a,rem , n,d=1,r=0,i;

printf("Enter the number : ");
scanf("%d" , &a);

n=a;
while((a/10)!=0){
a = a/10;
d++;
}
a=n;
for(i=1;i<=d;i++){
rem = a%10;
r = r + pow(rem,d);
a = a/10;
}

if(r == n)
printf("Number is armstrong");
else
printf("Number is not armstrong");




}
