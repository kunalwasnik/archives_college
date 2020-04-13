#include <stdio.h>

int main(){

int a[3][3];
int r , c;

printf("Enter no of row : \n");
scanf("%d" ,&r);
printf("Enter no of column : \n");
scanf("%d" ,&c);

printf("Enter elements \n");
for(int i=0;i<r;i++){
    for(int j =0;j<c;j++){
        scanf("%d" , &a[i][j]);
    }

}
/* 1 2 3
   3 4 5
*/
printf("Transpose : \n");

for( int j=0;j<c;j++){
    for( int i =0;i<r;i++){
        printf("%d " , a[i][j]);
    }
    printf("\n");

}

}
