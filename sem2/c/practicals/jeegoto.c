#include <stdio.h>

int main(){
int jee = 0;

printf("Have you prepared for jee : ");
scanf("%d" , &jee);
if(jee==1)
goto end;

printf("Current Status : \n");
printf("Playing cricket\n");
printf("Hanging out \n");
printf("Enjoying Life \n");
printf("That's life.");

end:
printf("life\n");


}


