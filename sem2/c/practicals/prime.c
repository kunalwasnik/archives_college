#include <stdio.h>
#include <graphics.h>

int main(){
int c , i , j,n,count;
textcolor(3);
for(i=1;i<100;i++){
count = 0;
        for(j=2;j<i;j++){
            if(i%j == 0){
            count++;

            break;
            }
        }

        if(count==0)
        printf(" %d ",i);



}



}
