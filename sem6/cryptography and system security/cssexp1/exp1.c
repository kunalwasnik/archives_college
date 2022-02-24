#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){

char msg[100],dec[100] , enc[100] , fe[100];
int len=0;
int key=0;
int val=0;

char ct[50][5] , ect[50][5]  ;
int ckey[5]={3,1,5,4,2};
int ctrows=0 , rows ,cindex=0,temp ,temp2;
int cremain=0;

//decryption variables.
char dct[50][5] , arrange_ect[50][5] , fdec[100];
int dlen , drows;

//fdec for putting columnar decryption text in single line.

printf("Enter Message\n");
scanf("%[^\n]%*c", msg);

len = strlen(msg);


//subsitution

printf("Enter key for substitution : \n");
scanf("%d" , &key);


printf("Encryption .... \n");
for(int i=1;i<=len;i++){

if(msg[i-1] == ' '){

enc[i-1] = ' ';
continue;
}
msg[i-1] = tolower(msg[i-1]);

val = msg[i-1] - 97;
enc[i-1] = ((val+key)%26) + 97;

}
enc[len] = '\0';
printf("Cipher Encryption : %s\n" , enc );



ctrows = (len/5);
cremain = len%5;

if(cremain==0)
	rows = ctrows;
else
	rows = ctrows+1;
// columnar.



// putting in rows and column and stuffing z where necessary.
for(int i=0;i<rows;i++){

	for(int j=0;j<5;j++){

		if(cindex < len){

			ct[i][j] = enc[cindex++];
		}else{
			//stuff random;
			ct[i][j] = 'z';

		}

	}


}





// try printing.
cindex=0;

for(int i=0;i<rows;i++){

	for(int j=0;j<5;j++){

		printf("%c " , ct[i][j]);

	}
	printf("\n");


}


//randomize rows;

// 3 1 5 4 2 key assuming.
temp=0;


for(int i=0;i<rows;i++){

	for(int j=0;j<5;j++){

		ect[i][(ckey[temp++]-1)] = ct[i][j];

	}
	temp=0;


}

//printing.

// 3 1 5 4 2 key assuming.
printf("\nAfter Columnar Encryption : \n");
temp=0;
temp2=0;
for(int i=0;i<rows;i++){

	for(int j=0;j<5;j++){

		printf("%c " , ect[i][j]);

		fe[temp2++] = ect[i][j];

	}
	printf("\n");


}
fe[temp2] = '\0';

printf("\nSENDING TXT : %s",fe);

dlen = strlen(fe);

drows = dlen/5;


printf("\nDecryption....\n");





//printing.

// 3 1 5 4 2 key assuming.

temp=0;
// first arrange in rows .

for(int i=0;i<drows;i++){

	for(int j=0;j<5;j++){

		arrange_ect[i][j] = fe[temp++];

	}


}

// print. arranged matrix.

for(int i=0;i<drows;i++){

	for(int j=0;j<5;j++){

		printf("%c " , arrange_ect[i][j]);

	}
	printf("\n");


}




temp=0;
for(int i=0;i<drows;i++){

	for(int j=0;j<5;j++){

		dct[i][j] = arrange_ect[i][(ckey[temp++]-1)];

	}
	temp=0;


}


printf("\nAfter Columnar Decryption : \n");
temp=0;
temp2=0;
for(int i=0;i<drows;i++){

	for(int j=0;j<5;j++){

		printf("%c " , dct[i][j]);
		fdec[temp2++] =  dct[i][j];

	}
printf("\n");

}

fdec[temp2] = '\0';


printf("Text in one row : %s\n" , fdec);



for(int i=1;i<=dlen;i++){



    val = fdec[i-1] - 97;
    //printf("%c" , (val -key)%26+97);
if(fdec[i-1] == ' '){

dec[i-1] = ' ';
continue;
}
    if(((val-key)%26) < 0 ){


            dec[i-1] = ((val-key)%26) +26 + 97;
    }else{
        dec[i-1] = ((val-key)%26) + 97;
    }
}

dec[dlen] = '\0';
printf("%s" , dec);





}
