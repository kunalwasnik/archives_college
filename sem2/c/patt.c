#include <stdio.h>

int main(){
int i , j , t=1;

int n;

printf("Enter number of rows : ");
scanf("%d" , &n);
for(i=1;i<=n;i++){

    for(j=n;j>=1;j--){
        if(j==t)
        printf("*");
        else
        printf("%d" , j);
    }
    printf("\n");
    t++;
}



}
