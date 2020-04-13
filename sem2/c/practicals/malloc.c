#include <stdio.h>
#include <stdlib.h>

int main(){

int *a,i;
int n;
printf("Number of elements in the array : ");
scanf("%d" , &n);

a = (int *)malloc(n*sizeof(int));
printf("Enter elements in the array :");
for(i=0;i<n;i++){
    scanf("%d" , &a[i]);

}

printf("Displaying : ");
for(i=0;i<n;i++){
    printf("%d \n" , a[i]);

}

}

