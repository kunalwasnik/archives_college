#include <stdio.h>
#include <string.h>


int main(){

char msg[100],dec[100] , enc[100];
int len=0;
int key=0;
int val=0;



printf("Enter Message\n");
scanf("%[^\n]%*c", msg);

len = strlen(msg);


//subsitution

printf("Enter key for substitution : \n");
scanf("%d" , &key);


printf("Encryption .... \n");
for(int i=1;i<=len;i++){

msg[i-1] = tolower(msg[i-1]);

val = msg[i-1] - 97;
enc[i-1] = ((val+key)%26) + 97;

}
enc[len] = '\0';
printf("%s" , enc);

printf("\nDecryption....\n");


for(int i=1;i<=len;i++){



    val = enc[i-1] - 97;
    //printf("%c" , (val -key)%26+97);

    if(((val-key)%26) < 0 ){


            dec[i-1] = ((val-key)%26) +26 + 97;
    }else{
        dec[i-1] = ((val-key)%26) + 97;
    }
}

dec[len] = '\0';
printf("%s" , dec);





}
