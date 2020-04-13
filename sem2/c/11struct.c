#include <stdio.h>

struct student{
char name[50];
int roll;
int p, c,m;

};

int main(){


 struct student s[2];
int i=0;
 for(i=0;i<2;i++){
        printf("Enter name : ");
        scanf("%s" , &s[i].name);

        printf("\nRoll No : ");
        scanf("%d", &s[i].roll);

 }

  for(i=0;i<2;i++){
        printf("\nName :  %s" , s[i].name);
        printf("\nRoll No :  %d" , s[i].roll);

 }



}
