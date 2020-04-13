#include <stdio.h>
// GCD AND LCM , Method 1
int main()
{
	int n1 , n2;
	int i,gcd=1;
	printf("Enter two numbers : ");
	scanf("%d %d" , &n1 , &n2);

	for(i=1;(i<=n1 && i<=n2);i++){

		if( (n1%i == 0)&& (n2%i==0)){
			gcd=i;

		}

	}

	printf("GCD is %d \n" , gcd);
	
	// (LCM x HCF = n1 x n2 ), high school maths

        printf("LCM is %d" , n1*n2/gcd);
}


