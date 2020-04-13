#include <stdio.h>
#include <string.h>

struct marks{
int p , c ,m;


};
struct std{
    char name[100];
    int rn;
    struct marks m;

};


int main(){
struct std s[3];
int i;
for(i=0;i<1;i++){
    printf("Enter name : ");
    scanf("%s" , s[i].name);

    printf("Enter roll number : ");
    scanf("%d" , &s[i].rn);

    printf("Enter physics chemistry and maths marks : ");
    scanf("%d %d %d" , &s[i].m.p,&s[i].m.c,&s[i].m.m);

}


printf("The details of the profiles listed are : ");


for(i=0;i<1;i++){
    //printf("Enter name : ");
    printf(" Name : %s\n" , s[i].name);

   // printf("Enter roll number : ");
    printf("Roll Number : %d\n" , s[i].rn);

    //printf("Enter physics chemistry and maths marks : ");
    printf("PCM MARKS %d %d %d\n" , s[i].m.p,s[i].m.c,s[i].m.m);

}




}
