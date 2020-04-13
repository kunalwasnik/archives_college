#include <stdio.h>

int main()
{
    int i, j,n ;
    float factorial=1, sum = 0;
    printf("Enter number n : \n");
    scanf("%d" , &n);


    printf("The sum of series of " );
    for(i=1;i<=n;i++){

            for(j=1;j<=i;j++){
                factorial = factorial * j;

            }

        printf(" %d / %d!\ + " ,i , i );
        sum = sum +  (i/factorial);
       // printf("%f sdfads %d %f" , sum , i , factorial);
        factorial = 1;

    }


    printf(" is %f" , sum);


}

