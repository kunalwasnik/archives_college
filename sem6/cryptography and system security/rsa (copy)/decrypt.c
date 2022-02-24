#include <stdio.h>
#include<math.h>
#include<string.h>
#include <ctype.h>

unsigned long long int  dac_power(unsigned long long int , unsigned long long int );
unsigned long long int  dac_modpower(unsigned long long int , unsigned long long int , unsigned long long int);
int main(){


unsigned  long long int p1 , p2 , d=1,e , n,i,val,fi;
 long double dtemp;
int len;
float c , f;

char msg[1000] , dec[1000];



printf("%llu" , dac_modpower(10 , 3 , 34189 ));
//printf("%llu" , dac_power(8 , 3703 ));

printf("Enter Message\n");
scanf("%[^\n]%*c", msg);
len = strlen(msg);

printf("Enter private keys : p1 , p2 \n");

scanf("%llu %llu" , &p1 , &p2);

printf("Enter public keys : e, n \n");
scanf("%llu %llu" , &e , &n);


fi = (p1-1) * (p2-1);


// for(i=1; i<=n;i++){

// 	printf(".");
// 	if (((d*e)%fi) == 1){

// 		break;
// 	}
// 	d++;
// }


// d calculation.


for(i=1; i<=n;i++){

	dtemp = (1.0 + i*fi)/e;




c = ceil(dtemp);
f = floor(dtemp);
	

	if( c==f){
		break;

	}
}

d = (int) (dtemp);


printf("\n");

printf("d value : %llu\n" , d);

for(i=0;i<len;i++){

	val = msg[i] - 97;

	dec[i] = (dac_modpower (val , d , n));

	printf("%llu %c \n" ,(dac_modpower (val , d , n)) , dec[i] );

}
dec[i]='\0';

printf("Decrypted Message : %s\n" , dec);







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
			//printf(" c: %llu \n",c);
			
			return c;


		

	}



}