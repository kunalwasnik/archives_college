#include <stdio.h>
#define max 3

int front = -1 , rear=-1 , cq[max];
void insert();
void del();
void display();

int main(){
    int choice;
    char ch;

    do{
        printf("\nAvailable Circular Queue Operations \n");
        printf("1: Insert element \t 2: Delete element\n");
        printf("3: Display elements \t 4:Exit \n");
        printf("\nEnter choice : ");
        scanf("%d" , &choice);

        switch(choice){
            case 1: insert();
                    break;
            case 2: del();
                    break;
            case 3: display();
                    break;
            case 4: exit(0);
                    break;


        }

        printf("Do you want to continue (y/n) :");
        scanf(" %c" , &ch);


    }while(ch=='y'|| ch=='Y');


}

void insert(){
int element;
    if(rear == max-1){
        rear = 0;
    }else{
        rear = rear+1;
    }

    if(rear==front){
        printf("Circular queue overflow.");
    }else{

        printf("Enter element: ");
        scanf("%d" , &element);
        if(rear == 0){
            rear = max-1;
            } // first case

            else
            rear--; //other case


        cq[rear] = element;
        if(front==-1)
        front=0;

    }
printf("Rear : %d , Front %d\n" , rear , front);
}

void del(){
int ele;
    if(front==-1)
        printf(" Circular queue underflow.\n");
    else{
        if(front==rear)
        front=-1 , rear=-1;

        else if(front=max-1){
            front=0;
        }else
            front++;
        printf("Element %d is deleted.\n" ,ele);

    }


}

void display(){
    if(front==-1&& rear==-1)
        printf("Queue is empty");
    else{
        if(rear<front){
            for(int i=front;i<=max-1;i++)
                printf("%d\n" , cq[i]);


        }

        for(int i=0;i<=rear;i++)
                printf("%d\n" , cq[i]);

    }


}
