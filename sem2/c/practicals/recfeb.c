#include <stdio.h>

int fib(int a , int b , int n);

int main(){
int n;
printf("Enter number of terms : ");
scanf("%d" , &n);


fib(1,1,n);

}

int fib(int a ,int b, int n){

printf("%d " , a);

if(n==1)
return 0;



return fib(b , a+b , n-1 );

}
