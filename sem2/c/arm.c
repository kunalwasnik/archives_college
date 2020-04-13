#include <stdio.h>
#include <math.h>

int main()
{
	int arm, sum=0, nd=0 , i,r , a;

	printf("Enter a number : \n");
	scanf("%d" , &arm);
	a = arm;

	if(a<0)
	return 0;

	while(a!=0){
		a = a/10;
		nd++;	
	}

	a = arm;
	
	for(i=0;i<nd;i++){

		r = a%10;
		sum = sum + pow(r, nd);
		a = a/10;
	
	}


	if(sum== arm){
	printf("%d is an armstrong number." , arm);
	}else{
	printf("%d is not an armstrong number." , arm);
	}
	printf("\n");
	return 0;


}
