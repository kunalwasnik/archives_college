#include <stdio.h>

int main(){
int a[100] , n , temp ,ch, shift ,rem,b[100];
int i;
printf("Enter number of elements : ");
scanf("%d" , &n);
printf("Enter elements : ");

for( i =0;i<n;i++){
    scanf("%d" , &a[i]);
}

printf("Enter choice : \n");
printf("1: Left Rotation \n");
printf("2: Right Rotation \n");
scanf("%d" , &ch );

switch(ch){
case 1:
temp = a[0];
            for(i =0;i<n-1;i++){
                a[i] = a[i+1];
                }
                a[n-1] = temp;

    break;

case 2:
temp = a[n-1];
for(i =n-1;i>=1;i--){
    a[i] = a[i-1];
    }

    a[0] = temp;

break;

default:
printf("Enter valid choice!");

}

printf("After operation : ");

for( i =0;i<n;i++){
    printf("%d" , a[i]);
}









}
