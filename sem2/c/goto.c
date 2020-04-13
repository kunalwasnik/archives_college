#include <stdio.h>

int main()
{
	int fact=1;
	int result=1;
	int num;

	printf("Enter a number : ");
	scanf("%d" , &num);

	top:
    if(num>0){
        fact = fact*num;
        num--;

    goto top;
    }

    printf("%d" , fact);
	return 0;



}
