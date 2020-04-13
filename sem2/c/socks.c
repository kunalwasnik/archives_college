#include <stdio.h>

int main(){
int pair=0, n;
int i,j;
int soc[101];

scanf("%d" , &n);

for(i=0;i<n;i++){
scanf(" %d" , &soc[i]);

}

// - 9 -9 10 10

for(i=0;i<n;i++){
    for(j=0;j<n;j++){

        if(soc[j] == soc[i] && soc[i] >0 && soc[j] >0 && i!=j){
            soc[j] = -1;
            soc[i] = -1;
            pair++;
            //printf("\n pair : %d %d" , j , j+1);
            break;
        }

}
}

printf("%d" , pair);





}
