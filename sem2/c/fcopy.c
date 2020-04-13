#include <stdio.h>
#include <string.h>


int main(){
FILE *fp , *fp2 ;
char ch, source[100] , des[100];
int e=0;
do {
if(e>0)
printf("file not found.Please enter an existing file name : \n");

printf("Enter source file name : ");
scanf("%s" , source);
fp = fopen(source , "r");
e++;
}
while(fp==0);


printf("Enter the destination file : ");
scanf("%s"  , des);


fp2 = fopen(des , "w");


while( ( ch = fgetc(fp) ) !=EOF){

fputc(ch, fp2);
printf("Copying : %c \n" ,ch);

}
printf("\n JOB COMPLETE");
}
