#include <stdio.h>

int main()
{
int flag;
int nrows, rows , spaces,pc;
int count;
int alpha=64;
printf("Enter number of rows : ");
scanf("%d" , &nrows) ;


	for(rows=1;rows<=nrows;rows++){
		for(spaces=nrows-rows;spaces>=1;spaces--){
			printf(" ");
		}

		for(count=1;count<=rows;count++){
            alpha++;
			printf("%c  " , (alpha));

		}

		printf("\n");

	}



}
