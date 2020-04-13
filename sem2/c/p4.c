#include <stdio.h>

int main()
{
int flag;
int nrows, rows , spaces,pc;
printf("Enter number of rows : ");
scanf("%d" , &nrows) ;


	for(rows=1;rows<=nrows;rows++){

		for(pc=1;pc<=rows;pc++){
			printf("%d" ,!((rows+pc)%2) );

		}

		printf("\n");

	}



}
