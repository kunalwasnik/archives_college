#include <stdio.h>

int main(){
int n;
FILE *fp, *target;
char t[29],ch;
/*handle = fopen("aspire.txt" , "w");
printf("Enter your thoughts : ");
scanf("%[^\n]", t);
*/
//fprintf(handle , t);

fp = fopen("aspire.txt" , "r");
target = fopen("copy.txt" , "w");

  while((ch = fgetc(fp)) != EOF){

      printf("%c", ch);
      fputc(ch,target);

}

   fclose(fp);
    fclose(target);
   return 0;


 }
