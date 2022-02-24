

#include <stdio.h>
#include<math.h>
#include<string.h>
#include <ctype.h>

#include <stdlib.h>

#include <string.h>

unsigned long long int  dac_modpower(unsigned long long int , unsigned long long int , unsigned long long int);

int main(){


	int prime;
	int g;
	int sen , rec;
	int pvt , shared;

	printf("Enter prime no : ");
	scanf("%d" , &prime);

	printf("Enter value of g :");
	scanf("%d" , &g);

	printf("Enter your private key : " );
	scanf("%d" , &pvt);




	printf("Sending message : ");
	//calculate sender crpt : 
	sen = dac_modpower(g , pvt , prime);

	printf("Send to other user : %d \n" , sen);


	printf("Enter received message : ");
	scanf("%d" , &rec);

	shared = dac_modpower(rec, pvt , prime);

	printf("Shared key is %d " , shared);




	
}


unsigned long long int dac_modpower(unsigned long long int num, unsigned long long int p ,unsigned long long n){

	int mid;
	unsigned long long int b,c;
	if(p ==1 ){

		return (num%n);
	}else{

		mid = p/2;

		b = dac_modpower(num , mid , n);

		c = (b * b ) % n;

		if(p%2!=0){

			c = (num*c)%n;
		}

		return c;

	}



}