#include <stdio.h>

void bsort(int a[] , int n);
void selsort(int a[] , int n);
int main(){

int k[]={1,4,9,2,8};
int n=5;
bsort(k,5);

for(int i=0;i<n;i++)
printf("%d ",k[i]);
}

void selsort(int a[] , int n){




 for(int i=0;i<n-1;i++){
        int min = i;

        for(int j=i+1;j<n;j++){
            if(a[j]<a[min])
            min = j;

        }

        int temp = a[i];
        a[i] = a[min];
        a[min] = temp;

 }}

 void bsort(int a[] , int n){

    for(int i=0;i<n-1;i++){
            for(int j=0;j<n-1;j++){
                    if(a[j+1] < a[j]){
                        int temp = a[j];
                        a[j] = a[j+1];
                        a[j+1] = temp;
                    }
            }
    }


}




 void isort(int a[] , int n){


}
