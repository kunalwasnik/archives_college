#include <stdio.h>
int main(){
FILE *fp;

char name[20];
int rate;
fp = fopen("test.txt" , "r");
fscanf(fp,"%s" , name);
printf("%s\n" ,name);
fscanf(fp,"%s" , name);
printf("%s\n" ,name);

fclose(fp);


}
// strlen , strcat , strpy , strcmp , strchr
