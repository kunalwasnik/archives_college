#include <stdio.h>

int main(){
	
	float a, b , r;
	int c , d;

	printf("Enter 2 numbers : \n");
	scanf("%f %f" , &a , &b);

	r = a+b;
	printf("\nAddition is %.2f\n" ,r);

	
	r = a-b;
	printf("Sub is %.2f\n" ,r);

	r = a/b;
	printf("Division is %.2f\n" ,r);

	c = a;
	d = b;
	r = c%d;
	printf("Modulus is %.2f\n" ,r);
	
	return 0;


}
