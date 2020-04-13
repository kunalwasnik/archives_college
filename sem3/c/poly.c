#include <stdio.h>

struct node{
  int coeff , power;
  struct node *next;

};

struct node* createnode(){

int i;
printf("Enter no of terms ");
scanf("%d" ,&i);

for(int j=0;j<i;j++){
    struct node *start = NULL ,*n=start ,*t;
    t = (struct node*) malloc(sizeof(struct node));
    printf("Enter number and its coefficent power :");
    scanf("%d %d" ,  &t->coeff , &t->power);

    if(start == NULL){
        start = t;
        t->next = NULL;
    }else{
        while(n->next!=NULL){
                n = n->next;

        }
        n->next = t;
        t->next = NULL;
    }

}
return start;
}
void display(struct node* t){

while(t!=NULL){
    printf("Number : %d  power %d\n" , t->coeff , t->power);
    t=t->next;
}


}

struct node*  add(struct node* a , struct node* b , struct node* c){
struct node *start=NULL , *res;
res = (struct node*) malloc(sizeof(struct node));
    if(a->power > b->power){
        c->coeff = a->coeff;
        c->power = c->power;

         if(start == NULL){
        start = c;
        c->next = NULL;
        }else{
        while(c->next!=NULL){
                c = c->next;

        }
        n->next = c;
        c->next = NULL;
        }


        a = a->next;

    }else if(a->power < b->power){
        b = b->next;

    }else if(a->power == b->power){


    }

}
int main(){
struct node *p1 , *p2, *result;

p1 = createnode();
p2 = createnode();

add(p1 , p2 , result );


}
