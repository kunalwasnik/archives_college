#include <stdio.h>

int main(){
int a[100] , n,num , low , high , mid,i;


printf("Enter number of elements  : ");
scanf("%d", &n);

for(i=0;i<n;i++){
    scanf("%d" , &a[i]);
}

printf("Enter element to be found : ");
scanf("%d" , &num);

low=0;
high = n-1;
mid = (low+high)/2;


while(1){

     if(num == a[mid] ){
        printf("Element found at position %d" , mid+1);
        break;
    }else if(num< a[mid]){
        high = mid-1;
        low = 0;
        mid = (low+high)/2;

    }else if(num>a[mid]){
    low = mid+1;
    high = n-1;
    mid = (low+high)/2;

    }else{
        printf("Element not found!");
        break;

    }


}




}
