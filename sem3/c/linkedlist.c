#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;

};
struct node *start=NULL;

void front(){
// node
int element;
struct node *t, *n;
t= (struct node*)malloc(sizeof(struct node));

    printf("Enter Element : ");
    scanf("%d" , &t->data);
     t->next = NULL;

    if(start==NULL)
    start =  t;
    else{
    t->next = start;
    start = t;
    }



}

end(){
struct node *t=start, *n;

n= (struct node*)malloc(sizeof(struct node));
printf("Enter element; ");
scanf("%d" , &n->data);
while(t->next!=NULL){
t = t->next;
}
t->next = n;
n->next = NULL;



}

display(){
struct node *t = start;
    while(t!=NULL){
        printf("%d" , t->data);
        t = t->next;

    }

}

int main(){
int choice , ch;
do{
printf("CHOICES : ");
printf("1: IF 2: IE 3: IM 4: DF 5:DE 6:DM 7:D \n");
scanf("%d" , &choice);
switch(choice){
    case 1: front();
        break;
    case 7: display();
        break;
    case 2: end();
        break;


}
printf("Press y to continue:");
scanf(" %c" , &ch);
}while(ch=='y');


}
