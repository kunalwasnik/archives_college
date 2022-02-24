// rsa



#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
unsigned long long int min=5 , max=500;
	
unsigned long long int generate_prime();
unsigned long long int find_e(unsigned long long int);

unsigned long long int  dac_modpower(unsigned long long int , unsigned long long int , unsigned long long int);
unsigned long long int  dac_power(unsigned long long int , unsigned long long int );

int main()
{


	int len;
	unsigned long long int p1, p2 , fi,val , enc , msg;
	srand(time(NULL));
	int i;
	int t;
	//unsigned long long int max=18446744073709551615;

	// 1,001,000,000
	

	//public key.
	unsigned long long int  n , e , d;

	// encryption..

	// sender side :

	// select 2 random number :

	// rand() % (max_number + 1 - minimum_number) + minimum_number
	

	// int res;
	// res = dac_modpower(2,11,7);
	// printf("%d" , res);

	printf("Enter Message\n");
	scanf("%lld", &msg);
	


	 p1 = 179;
	 p2 = 191;


	printf("Selected Random Prime Number are : %llu , %llu \n\n" , p1 , p2);

	n = p1 * p2;
	fi = (p1-1) * (p2-1);

	e = find_e(fi);

 	printf("Selected e =  %llu for n=%llu \n\n" , e,n);

 	// rsa encrypt.

		// enc[i] = (dac_modpower(val , e , n) % 26) + 97;
		enc = (dac_modpower(msg , e , n) );
		// printf("%c\n" , enc[i]);

 


 	//enc[i] = '\0';

 	printf("Encrypted RSA message : %llu \n"  , enc);

 	printf("Public keys : e = %llu , n = %llu\n" , e , n );


 	// Decryption side..









}

unsigned long long int generate_prime(){
	long long int i, j ,num;
	int flag=0;

		


	while(flag!=1){

			num = rand() % (max + 1 - min ) + 1;
			flag=1;

		for(j=2;j<=sqrt(num);j++){
			if(num%j == 0){
				//printf("Breaking Selected : %llu \n" , num);
				flag=0;
				break;
			
			}
		}


		if(flag==1){
			break;
		}
	} 

return num;

}

unsigned long long int find_e(unsigned long long int n1){

	unsigned long long int i;

		

	for(i=2;i<n1;i++){

		if(n1%i==0){
			continue;
			
		}else{
			break;
		}
	}

	return i;


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

unsigned long long int dac_power(unsigned long long int num, unsigned long long int p ){


	unsigned long long int b,c,mid;
	if(p ==1 || p==0){

		return (num);
	}else{

		mid = p/2;

		b = dac_power(num , mid);


		c =b*b;	

		//printf("b %llu   \n" , b);

		if(p%2!=0){

			c = (c*num);
			
		}
			printf(" c: %llu \n",c);
			
			return c;


		

	}



}