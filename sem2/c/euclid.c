#include <stdio.h>

// GCD USING EUCLID's METHOD , method 2
int main()
{
int n1 , n2 ,rem;
int product,temp;

printf("Enter two numbers : ");
scanf("%d" , &n1);
scanf("%d" , &n2);
product = n1*n2;

if(n2>n1)
{
	// swap them
	temp = n1;
	n1 = n2;
	n2 = temp;

}


	while(n2!=0){
		rem = n1%n2;
		n1 = n2;
		n2 = rem;

	}


printf("GCD is %d \n" , n1);
printf("LCM is %d" , product/n1);
}
