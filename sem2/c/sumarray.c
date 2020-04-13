#include <stdio.h>

int sum(int a[] , int n);

int main(){
int a[100];
int i ,n , result;
printf("Enter number of element in array  :");
scanf("%d" , &n);
printf("Enter Elements : ");

for(i=0;i<n;i++){
    scanf("%d" , &a[i]);
}

result = sum(a , n-1);
printf("The sum of elements in the array  is %d" , result);

}

int sum(int a[] , int n){

if(n==0)
return a[0];
else
//printf("Current element : %d" , a[n]);
return a[n] + sum(a, n-1);


}



