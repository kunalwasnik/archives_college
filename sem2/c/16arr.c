#include <stdio.h>

int main(){
int temp, skew=1;
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

            if(a[i][j] != a[j][i]){
                skew = 0;
                i=1000;
            }
        }

}


if(skew==0)
printf("Its not symmetric");
else
printf("Its symmetric");



}
