#include <stdio.h>

int main(){
int temp;
int a[100][100],n;
int i,j;
printf("Enter number of elements : ");
scanf("%d" , &n);
printf("Enter elements : \n");

for( i =0;i<n;i++){
        for(j=0;j<n;j++){
        scanf("%d" , &a[i][j]);

        }

}

for( i =0;i<n-1;i++){
        for(j=n-1;j>i;j--){
            temp = a[i][j];

            a[i][j] = a[j][i];
             a[j][i] = temp;

        }

}

printf("Transpose of matrix is : \n");

for( i =0;i<n;i++){
        for(j=0;j<n;j++){
        printf("%d " , a[i][j]);

        }

        printf("\n");
}




}
