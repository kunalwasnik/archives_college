#include <stdio.h>

int main()
{
	int copy ,num , rev, ori;
	int rem=0;
	printf("Enter 	number : ");
	scanf("%d" , &num);
	rev = 0;

	copy = num;
	while(copy!=0){
		rem = copy % 10;

		rev = rem + rev*10;
		copy = copy/10;
	//printf("Reversed is %d " , rev);

	}
	if(rev == num){
		printf("Number is palindrome.");
	}else{

		printf("Number is not palindrome.");

	}

}
