#include <stdio.h>
#include <string.h>
struct words{
char word[50];
};
int main(){
struct words w[100],temp;
int n,i,j;
printf("Enter number of words :");
scanf("%d" , &n);
printf("Enter %d words \n" , n);
for(i=0;i<n;i++){
scanf("%s" , w[i].word);
}
//BUBBLE SORTING
for(i=0;i<n;i++){
    for(j=0;j<n-1;j++){
            if(strcmp(w[j].word,w[j+1].word) > 0){
                temp = w[j];
                w[j] = w[j+1];
                w[j+1] = temp;
            }
    }
}
printf("Words in Dictionary Order are  :\n");
for(i=0;i<n;i++){
printf("%s " , w[i].word);
}
}
