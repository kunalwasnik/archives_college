#include <stdio.h>
int r , c;
void enter(int a[10][10]);
void transpose(int a[10][10] , int b[10][10]);
void ntranspose(int a[10][10]);
int main(){
    int a[5][5],b[5][5];
    int r,c;

    enter(a);

    ntranspose(a);
    display(a);

}

void enter(int m[10][10]){
   printf("Enter number of rows : ");
    scanf("%d", &r);

    printf("Enter number of column : ");
    scanf("%d" , &c);


    printf("Enter a matrix : \n");

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
        scanf("%d" , &m[i][j]);

	    }

    }
}

void transpose(int a[10][10] , int b[10][10]){
int temp;

 for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){


            b[i][j] = a[j][i];

	    }

    }


}


void display(int m[10][10]){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
        printf("%d " , m[i][j]);

	    }
	    printf("\n");

    }
}





void ntranspose(int a[10][10]){
int temp;
int t = 0;
 for(int i=0;i<r;i++){

        for(int j=0;j<i;j++){

            temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i]=temp;
            printf(" (%d %d )" , i , j);
            //printf("SWAPPING....");

	    }

	    t++;

    }


}
