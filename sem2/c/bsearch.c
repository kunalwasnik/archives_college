#include <stdio.h>

int main(){

    int a[6]={3,4,5,6,9,10},i , low , high , mid,e,f=0;

    low = 0;
    high = 5;
    mid = (low+high)/2;

    printf("Enter element to be searched : ");
    scanf("%d" , &e);

   while(high>=low){
        if(e==a[mid]){
        f=1;
            printf("Element found at pos : %d" , mid+1);
            break;
        }
        else if(e<a[mid]){
            high = mid-1;

        }else if(e>a[mid]){
            low = mid+1;

        }

       mid = (low+high)/2;


    }

    if(f==0)
    printf("Element not found.");

}
