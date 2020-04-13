#include <stdio.h>

int factorial(int );


int main(){
int num , result;
printf("Enter the factorial number : ");
scanf("%d" , &num);
result = factorial(num);
printf("The factorial is : %d" , result);

}

int factorial(int f)
{
    if(f==1){

    return 1;
    }

    else{

    return f*factorial(f-1);
    }
}

