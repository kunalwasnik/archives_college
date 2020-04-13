#include <stdio.h>

void create(int c[3][3]);
void multiply(int a[3][3] , int b[3][3] ,int c[3][3]);
void display(int c[3][3]);
int main(){
int a[3][3] , b[3][3], c[3][3];

printf("Enter matrix 1 \n");
create(a);
printf("Enter matrix to be multiplied \n");
create(b);

multiply(a , b ,c);
printf("After multiplication : \n");
display(c);


}

void create(int a[3][3]){
int i , j;

for(i=0;i<3;i++){
    for(j=0;j<3;j++){

        scanf("%d" , &a[i][j]);
    }
}
}


void multiply(int a[3][3] , int b[3][3] ,int c[3][3]){

    int i , j , k,sum=0;

    for(i=0;i<3;i++){

            for(j=0;j<3;j++){
                 c[i][j]=0;
                for(k=0;k<3;k++){
                    c[i][j] = c[i][j] + a[i][k] * b[k][j];
                    //printf("%d\n" , c[i][j]);

                }
    }


    }


}

void display(int c[3][3]){
int i , j;
for(i=0;i<3;i++){
    for(j=0;j<3;j++){

       printf("%d " , c[i][j]);
    }
    printf("\n");
}


}
