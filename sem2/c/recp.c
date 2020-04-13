#include <stdio.h>

int rp(int n , int p);
int main(){
int n , power , c;

printf("Enter number and its power : " );
scanf("%d %d" , &n , &power);

c = rp(n,power2);
printf("Its value is : %d" , c);

}

int rp(int n , int p){

    if(p==0){
        return 1;
    }else{

        return n*rp(n , p-1);

    }



}

