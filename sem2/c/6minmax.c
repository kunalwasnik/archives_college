#include <stdio.h>

int main(){
int a[100] , n , min, max;
int i;
printf("Enter number of elements : ");
scanf("%d" , &n);
printf("Enter elements : ");

for( i =0;i<n;i++){
    scanf("%d" , &a[i]);
}
min = a[0];
max = min;

for(i=0;i<n;i++){
    if(a[i] < min)
    min = a[i];

    if(a[i]>max)
    max = a[i];

}


printf("The min and max elements of array are : %d %d" ,min , max);


}
