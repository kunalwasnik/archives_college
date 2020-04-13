#include <stdio.h>

int gcd(int , int);

int main(){

int a ,b ,r;

printf("Enter two number for calculating gcd : ");
scanf("%d %d" , &a , &b);

if(b>a){
a = a+b;
b = a-b;
a = a-b;
}
r = gcd(a,b);

printf("Their GCD is %d" , r);



}

int gcd(a ,b){

    if(b==0)
    return a;

    else
    return gcd(b , b%a);


}
