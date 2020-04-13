#include <stdio.h>

int sumf(int , int , int);

int main(){
int n , result;

printf("Enter end terms of series :");
scanf("%d" , &n);
result = sumf(1 , 1 ,n);
printf("The sum of fibbonaci : %d" , result);

}


int sumf(int a , int b ,  int n){

if(n==1)
return a;

else
return a + sumf(b , a+b , n-1);



}
