#include <stdio.h>

int main()
{
int flag;
int nrows, rows , spaces,sym;
printf("Enter number of rows : ");
scanf("%d" , &nrows) ;

int alpha =64;
	for(rows=1;rows<=nrows;rows++){

	  for(spaces = nrows-rows;spaces>=1;spaces--){
	 	printf(" ");
	  }

	  for(sym=rows;sym>=1;sym--){
	  	printf("%c" , alpha+sym);

	  }
	  alpha = alpha + rows;




		printf("\n");

	}



}
