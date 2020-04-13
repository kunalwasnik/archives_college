#include <stdio.h>

int main(){
int i , j , t=1;

int n;

printf("Enter number of rows : ");
scanf("%d" , &n);
for(i=0;i<n;i++){

   for(int spaces=n-i-1;spaces>=1;spaces--){
    printf(" ");
   }


    for(j=n;j>=n-i;j--){

        printf("%d" , j);
    }
    printf("\n");

}



}

