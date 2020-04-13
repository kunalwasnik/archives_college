#include <stdio.h>

struct engineers{
char name[100];
int code;
int salary;

};

int main(){
struct engineers user[2],temp;

int i ,j , n=2;

for(i=0;i<n;i++){
    printf("Enter Engineer's name :");
    scanf("%s" , user[i].name);

    printf("Enter his  id  :");
    scanf("%d" , &user[i].code);


    printf("Enter his  salary(lpa) :");
    scanf("%d" , &user[i].salary);

}


for(i=0;i<n;i++){
    for(j=0;j<n-1;j++){

        if(user[j].code>user[j+1].code){
        temp = user[j];
        user[j] = user[j+1];
        user[j+1] = temp;

        }


}

}


for(i=0;i<n;i++){
//printf("After Addition : \n");
    printf("Engineer's name : %s \n" , user[i].name);
    printf("ID  : %d\n" , user[i].code);
    printf("Salary(lpa) : %d \n" , user[i].salary);

}




}
