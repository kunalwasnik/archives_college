#include <stdio.h>

int main(){
float current =1;

for(int i=1;i<=365;i++){
    current = current + (current/100);

}
printf("%f" , current);

}
