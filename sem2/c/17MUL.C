#include <stdio.h>

void createMatrix(int a[10][10],int n);
void display(int d[10][10] , int n);
void multiply(int a[10][10] , int b[10][10] , int c[10][10],int n);


int main(){
int n;
int mone[10][10],mtwo[10][10] ,result[10][10];
printf("Enter order of matrix : ");
scanf("%d" , &n);
createMatrix(mone , n);
createMatrix(mtwo,n);

display(mone , n);
display(mtwo,n);

multiply(mone , mtwo , result, n);
display(result,n);

}

void createMatrix(int a[10][10] ,int n){
int i,j;

printf("Enter elements \n");
for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        scanf("%d" , &a[i][j]);

    }

}


}

void multiply(int a[10][10] , int b[10][10] , int c[10][10], int n){
    int k=0,i,j;

    for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        c[i][j] =  0;
        for(k=0;k<n;k++){
                c[i][j] =  c[i][j] + a[i][k]*b[k][j];

        }

    }

}




}

void display(int d[10][10] ,int n){

    int i , j;
printf("\nMatrix is : \n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
        printf("%d " , d[i][j]);

    }
    printf("\n");

}

}
