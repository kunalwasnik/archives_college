#include<stdio.h>
#include <string.h>
#include <stdlib.h>

struct node{
	char name[20],branch[20];
	int roll_no , sem ,score;
	struct node *next;



};


struct node *start=NULL;

void insertf();
void insertm();
void deletee();
void inserte();
void deletef();
void deletem();
void display();

int main(){

int ch;
char cch;
do{


	printf("1: Insert at the front \n");
	printf("2: Insert at the middle \n");
	printf("3: Insert at the end \n");


	printf("4: Delete element from the front \n");
	printf("5: Delete element from the middle \n");
	printf("6: Delete element from the end \n");

	printf("7: Display Elements\n");
	printf("8: Exit\n");
	printf("Enter choice : ");
	scanf("%d" , &ch);

	switch(ch){

		case 1: insertf();
				break;
	  	case 2: insertm();
			break;
		case 3: inserte();
				break;
	 	case 4: deletef();
				break;
		case 5: deletem();
				break;
		case 6: deletee();
				break;
		case 7: display();
				break;
		case 8: exit(0);
				 break;
		default :
				printf("Enter a valid choice \n");




	}

	printf("Press y/Y to continue: ");
	scanf(" %c" , &cch);


}while(cch=='Y' || cch=='y');





}




// INSERTING FUNCTIONS



  //	char name[20],branch[20];
   //	int roll_no , sem ,score;
   //	struct node *next

void insertf(){


	struct node *ptr;
	ptr = (struct node*) malloc(sizeof(struct node));
	printf("Enter student data :  \n");

	printf("Enter name : ");
	scanf("%s",ptr->name);

	printf("Enter roll no : ");
	scanf("%d" , &ptr->roll_no);

	printf("Enter branch : ");
	scanf("%s" ,ptr->branch);

	printf("Enter semester : ");
	scanf("%d" ,&ptr->sem);

	printf("Enter score : ");
	scanf("%d" , &ptr->score);


	if(start==NULL){
		start = ptr;
		ptr->next = NULL;
		}

	else{
		ptr->next=start;
		start = ptr;

	}





}

void inserte(){

	struct node *ptr ,*t=start;
	ptr = (struct node*) malloc(sizeof(struct node));

	printf("Enter student data :  \n");


	printf("Enter name : ");
	scanf("%s",ptr->name);

	printf("Enter roll no : ");
	scanf("%d" , &ptr->roll_no);

	printf("Enter branch : ");
	scanf("%s" ,ptr->branch);

	printf("Enter semester : ");
	scanf("%d" ,&ptr->sem);

	printf("Enter score : ");
	scanf("%d" , &ptr->score);
    ptr->next = NULL;

	if(start==NULL)
		start = ptr;
	else{


		while(t->next!=NULL){
			t = t->next;
			}
			t->next = ptr;



	}

}

void insertm(){
    struct node *ptr , *t = start,*prev;
    int i,pos;
    ptr = (struct node*) malloc(sizeof(struct node));
    printf("Enter position number before which record has to be added : ");
    scanf("%d" , &pos);
	printf("Enter student data :  \n");


	printf("Enter name : ");
	scanf("%s",ptr->name);

	printf("Enter roll no : ");
	scanf("%d" , &ptr->roll_no);

	printf("Enter branch : ");
	scanf("%s" ,ptr->branch);

	printf("Enter semester : ");
	scanf("%d" ,&ptr->sem);

	printf("Enter score : ");
	scanf("%d" , &ptr->score);

    if(t == NULL){
        start = ptr;
    }else if(t->next == NULL){
        start = ptr;
        ptr->next = t;
    }

    else{
        for(i=1;i<pos;i++){
            prev = t;
            t= t->next;
        }

        prev->next = ptr;
        ptr->next = t;

    }

}


void deletef(){

struct node *ptr;

	if(start==NULL){

		printf("No element is present \n");


	}else{
		ptr= start;
		start = start->next;
		free(ptr);


	}


}

void deletee(){
struct node *prev , *cur;
cur = start;
if(start==NULL){

		printf("No element is present \n");


	}else{
while(cur->next!=NULL){
 prev = cur;
    cur= cur->next;


}
prev->next = NULL;
}

}

void deletem(){
int pos,a=1;
struct node *t=start , *prev;
if(start==NULL)
printf("Underflow.");
else{

    printf("Enter element number : ");
    scanf("%d" , &pos);

    if(pos==1){
        start = NULL;
    }else{

            while(a!=pos){
                prev = t;
                t = t->next;
                a++;
            }
            prev->next = t->next;



    }



    }

}
void display(){

	struct node *ptr , *t = start;

	while(t->next !=NULL){

		printf("Name : %s \n", t->name);
		printf("Roll No : %d \n" , t->roll_no);
		printf("Branch : %s \n",t->branch);
		printf("Semester : %d \n",t->sem);
		printf("Semester Score : %d \n" , t->score);

		t = t->next;
	}

		printf("Name : %s \n", t->name);
		printf("Roll No : %d \n" , t->roll_no);
		printf("Branch : %s \n",t->branch);
		printf("Semester : %d \n",t->sem);
		printf("Semester Score : %d \n" , t->score);


}


/*
OUTPUT

*/


















