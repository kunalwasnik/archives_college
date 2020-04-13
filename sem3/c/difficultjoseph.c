#include <stdio.h>
#include <stdlib.h>
int total=0 , k,survivor;
void enq(int a);
void deq(int a);
void display();

int josephus(int n , int pos);
struct node{
 int warrior;
 struct node *next;

};
struct node *start=NULL;
struct node *current = NULL;
struct node *del=NULL;


int main(){
    int ch=1;
    int one;
    printf("Enter  warriors & enter 0 to exit : \n");

    while(ch!=0){
        scanf("%d" , &ch);

        if(ch!=0){
            one = ch;
            enq(ch);
            total++;


        }


    }
    if(total==0){
        printf("No warriors.");
    }else if(total ==1)
        {
               printf("Remaining survivor is : %d" , one);
        }
    else{

    last();

    printf("Enter position number to be killed : ");
    scanf("%d" , &k);
    survivor = josephus(total,k);

    printf("Remaining survivor is : %d" , survivor);
    }
//display();


}
int josephus(int n , int pos){

    while(total!=2){

           // printf("TOTAL :%d \n" , total);


                del = current;
                for(int i=1;i<pos;i++){
                    del = del->next;

                }

                //printf("DELETING : %d\n" , del->warrior);
                deq(del->warrior);
                //printf("TOTAL ::::: %d \n" , total);


   }

    survivor = current->warrior;

}
void deq(int a){
struct node *t = current , *prev;
if(t==NULL){
    printf("Queue Underflow.");
}else{
    total--;
    while(t->warrior!=a){
        prev = t;
        t = t->next;

    }
    prev->next = t->next;
    current = t->next;


}

//display();

}


void enq(int a){
struct node *ptr,*t=start;
ptr = (struct node*) malloc(sizeof(struct node));

   // printf("Enter warrior : ");
    ptr->warrior = a;

    if(start==NULL){
        start = ptr;
        current = ptr;
    }else{
        while(t->next!=NULL){
                t = t->next;

        }
        t->next = ptr;
        ptr->next = NULL;


    }
}





void display(){
int c = total;
struct node *ptr , *t = start;

    if(start==NULL){
        printf("No warriors present.");


    }else{
        while(c!=0){
            printf("%d\n" , t->warrior);
            t=t->next;
            c--;
        }
         printf("%d\n" , t->warrior);

    }

}

void last(){

struct node *t=start;


   // printf("Enter warrior : ");

        while(t->next!=NULL){
                t = t->next;

        }
        t->next= start;

//printf("LAST : %d \n" , t->next->warrior);

}
/*
OUTPUT:
TC 1
    Enter  warriors & enter 0 to exit :
    0
    No warriors.
TC 2

    Enter  warriors & enter 0 to exit :
    3
    0
    Remaining survivor is : 3

TC 3
    Enter  warriors & enter 0 to exit :
    1
    2
    3
    4
    0
    Enter position number to be killed : 2
    Remaining survivor is : 1

TC 4
    Enter  warriors & enter 0 to exit :
    1
    2
    3
    4
    5
    0
    Enter position number to be killed : 3
    Remaining survivor is : 2

TC 5
    Enter  warriors & enter 0 to exit :
    2
    4
    5
    7
    8
    9
    0
    Enter position number to be killed : 2
    Remaining survivor is : 8

TC 6
    Enter  warriors & enter 0 to exit :
    1
    2
    3
    4
    5
    0
    Enter position number to be killed : 5
    Remaining survivor is : 4




*/
