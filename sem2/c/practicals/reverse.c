#include <stdio.h>
#include <math.h>
int main(){

// 123 3 * 100 , 2 * 10 , 1
int a , *p1 , *p2;
int r, temp=0,digits=0,n=0;
printf("Enter a number : ");
scanf("%d" , &a);

temp =a;
while(temp!=0){
temp = temp/10;
digits++;

}
temp =a;
for(int i=0;i<digits;i++){
r = temp%10;
n = n*10 + r;
temp = temp/10;

}

printf("Messed up digit : %d\n" , n);
p1 = &n;
p2 = &a;

printf("Addition of messed up digit : %d" , *p1+*p2);

}
