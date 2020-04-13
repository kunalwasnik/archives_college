#include <stdio.h>

int main()
{
	int year , month;
	
	printf("Enter month ");
	scanf("%d" , &month);

	switch(month){
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
		printf("%d has 31 days.", month);
		break;

		case 2:
		 	{
				printf("Enter year \n");
				scanf("%d" , &year);

				if( (year%4 == 0 && year%100 !=0) || year%400 ==0 ){
					printf("%d has 29 days.", month);
					//Leap Year
				}else{
					printf("%d has 28 days.", month);
				}
			}
		break;
		
		default:
			printf("%d has 30 days." , &month);
	
	}	
	printf("\n");

	return 0;

}
