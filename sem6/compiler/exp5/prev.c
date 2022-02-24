#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

char findfirst(char nt , char p[100][20]);

int count;
char first;
int main(){

	char production[100][20];
	

	printf("Enter number of production : ");
	scanf("%d" , &count);


	for(int i=0;i<count;i++){
		scanf("%s" , production[i]);

	}

	for(int i=0;i<count;i++){
		 //printf("%c\n" , production[i][0]);

		first = findfirst(production[i][0] , production);
		printf("First of %c is %c \n" , production[i][0],first);

	}





}

char findfirst(char nt , char p[100][20]){

char n = nt;
char f;

	for(int j=0;j<count;j++){

		if(p[j][0] == nt){

			if(isupper(p[j][2]) ==0 ){

			return p[j][2];
			
			}

			else{
				return findfirst(p[j][2] , p);

			}

		}
	


	}







}