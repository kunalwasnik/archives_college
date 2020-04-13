#include <stdio.h>
#include <math.h>
int main(){
int a,rem , n,d=1,r=0,i,sum=0 , prod=1;

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
sum = sum + rem;
prod = prod * rem;
a = a/10;
}

printf("Sum is %d and product is %d" , sum,prod);


}
