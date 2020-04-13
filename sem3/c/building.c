#include <stdio.h>

int main(){
int col , row;
col = 2;
row =3;
int a[row][col];

for(int i=0;i<col;i++){
    for(int j=0;j<row;j++){
        printf("Enter element : ");
        scanf("%d" , &a[j][i]);

    }

}

for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        printf("%d " , a[i][j]);

    }
printf("\n");
}

}
