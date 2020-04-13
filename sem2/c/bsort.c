#include <stdio.h>

int main(){
int a[5];
int i,temp;
printf("Enter 5 elements : ");

for(i=0;i<5;i++){
    scanf("%d" , &a[i]);

}

for(i=0;i<5;i++){
    for(int j=0;j<5;j++){

            if(a[j+1] < a[j]){
                temp = a[j+1];
                a[j+1] = a[j];
                a[j] = temp;


            }


    }

}


for(i=0;i<5;i++){
    printf("%d " , a[i]);

}



}
