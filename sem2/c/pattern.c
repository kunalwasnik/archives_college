#include <stdio.h>

int main()
{
	int nrows, spaces , num ;
	int crow;
	int i , j;

	printf("Enter number of rows : ");
	scanf("%d" , &nrows);

	for(crow=1;crow<=nrows;crow++){
		for(spaces = 1;spaces<=nrows-crow;spaces++){
			printf("  ");

		}

		for(i=1;i<=crow;i++){
			printf("%d " ,i);
		}

		for(j=crow-1;j>=1;j--){
			printf("%d " ,j);
		}


    printf("\n");


	}

}
