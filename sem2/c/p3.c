#include <stdio.h>

int main()
{
int i,j;
int rows , spaces;
int nrows;
int count=1;
printf("Enter number of rows : ");
scanf("%d" , &nrows);



for(rows=1;rows<nrows;rows++){

	for(spaces=nrows-rows;spaces>1;spaces--){
		printf(" ");
	}

		/* for(i=1;i<=count;i++){
	 	 printf("*");
		}
		count = count+2; */

		 for(i=1;i<=rows*2-1;i++){
	 	 printf("*");
		}
		//count = count+2;

		printf("\n");




	}

	printf("\n");


}



