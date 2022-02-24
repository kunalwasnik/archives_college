#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){

	int total=0, upper=0 , lower=0 , symbol=0 , digit=0,len=0,special=0 , mid_number_symb=0 , strength=0;
	int only_letter=0 , only_num=0;

	char p[1000];

	printf("Enter password\n");
	scanf("%[^\n]%*c", p);

	len = strlen(p);



	total = len;

	for(int i=0;i<len;i++){

		if(i==0 || i == (len-1)){

			continue;
		}else{

			if(isdigit(p[i])){
			mid_number_symb++;
			}
			if(ispunct(p[i])){
			mid_number_symb++;
			}

		}

		if(islower(p[i])){
			lower++;

		}

		if(isupper(p[i])){

			upper++;
		}

		if(isdigit(p[i])){
			digit++;
		}

		if(ispunct(p[i])){
			special++;
		}

	}



	for(int i=0;i<len;i++){
			if(isupper(p[i]) || islower(p[i]) ){

				only_letter++;
			}else{
				only_letter = 0;
				break;
			}

	}


		for(int i=0;i<len;i++){
			if(isdigit(p[i])){

				only_num++;
			}else{
				only_num = 0;
				break;
			}

	}


	
	//printf("Upper %d , lower %d , total %d , digit %d , alpha %d mid %d" ,upper , lower ,total, digit, special , mid_number_symb);
	//printf("%d" , only_letter);

	// caculate entropy;
	strength = (total*4) + ((len-upper)*2) + ((len-lower)*2) + (digit*4)
				+ (symbol*6) + (mid_number_symb*2) ;

	//deduction

	strength = strength - (only_letter) - (only_num);


	printf("strength of password : %d\n" , strength);
	
		if(strength< 50){
			printf("Weak Password");
		}else if(strength<90){
		
				printf("Moderate Password");
		}else{
			printf("Strong password.");
		}


}
