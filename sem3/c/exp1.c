/* Experiment No 1 */
#include <stdio.h>
#include <string.h>
#define MAX 5
// Function Prototypes
void push(char c);
void pop();
void display();
void checkpalin();
// Global Variables
int top=-1 , stack[MAX];
int main(){
    int choice;
    char ch , e;

    do{
        printf("\nAvailable Stack Operations \n");
        printf("1: Push element \t 2: Pop element\n");
        printf("3: Display elements \t 4:Check Palindrome \n");
        printf("5:Exit\n");
        printf("\nEnter choice : ");
        scanf("%d" , &choice);

        switch(choice){
            case 1: printf("Enter element :");
                    scanf(" %c" , &e);
                    push(e);
                    break;
            case 2: pop();
                    break;
            case 3: display();
                    break;
            case 4: checkpalin();
                    break;
            case 5: exit(0);
                    break;


        }

        printf("Do you want to continue (y/n) : ");
        scanf(" %c" , &ch);


    }while(ch=='y'|| ch=='Y');


    return 0;

}

void push(char c){

    if(top==MAX-1)
        printf("Stack Overflow\n");
    else{
        top++;
        //printf("Enter element to be pushed :");
        stack[top] = c;
    }

}

void pop(){
    if(top==-1)
        printf("Stack Underflow\n");
    else
        { top--;
          //printf("Element Removed\n");
        } ;
}

void display(){
    if(top==-1)
        printf("No Elements to display\n");
    else
    {   for(int i=0;i<=top;i++){
            printf("%d\n" ,stack[i]);
        }
    }

}

void checkpalin(){
char str[MAX+1] , rev[MAX+1];
int len , i;
printf("Enter string : ");
scanf("%s" , str);
len = strlen(str);

for(i=0;i<len;i++){
    push(str[i]);

}

for(i=0;i<len;i++){
    rev[i] = stack[top];
    pop();
}
rev[i] = '\0';

if(strcmp(str , rev)==0){
    printf("String is palindrome.\n");
}else{
    printf("String is not palindrome.\n");
}




}



/*

OUTPUT:
Available Stack Operations
1: Push element 	 2: Pop element
3: Display elements 	 4:Check Palindrome
5:Exit

Enter choice : 2
Stack Underflow
Do you want to continue (y/n) : y

Available Stack Operations
1: Push element 	 2: Pop element
3: Display elements 	 4:Check Palindrome
5:Exit

Enter choice : 1
Enter element :1
Do you want to continue (y/n) : y

Available Stack Operations
1: Push element 	 2: Pop element
3: Display elements 	 4:Check Palindrome
5:Exit

Enter choice : 1
Enter element :2
Do you want to continue (y/n) : y

Available Stack Operations
1: Push element 	 2: Pop element
3: Display elements 	 4:Check Palindrome
5:Exit

Enter choice : 1
Enter element :3
Do you want to continue (y/n) : y

Available Stack Operations
1: Push element 	 2: Pop element
3: Display elements 	 4:Check Palindrome
5:Exit

Enter choice : 1
Enter element :4
Do you want to continue (y/n) : y

Available Stack Operations
1: Push element 	 2: Pop element
3: Display elements 	 4:Check Palindrome
5:Exit

Enter choice : 1
Enter element :5
Do you want to continue (y/n) : y

Available Stack Operations
1: Push element 	 2: Pop element
3: Display elements 	 4:Check Palindrome
5:Exit

Enter choice : 1
Enter element :6
Stack Overflow
Do you want to continue (y/n) : y

Available Stack Operations
1: Push element 	 2: Pop element
3: Display elements 	 4:Check Palindrome
5:Exit

Enter choice : 4
Enter string : nitin
String is palindrome.
Do you want to continue (y/n) : y

Available Stack Operations
1: Push element 	 2: Pop element
3: Display elements 	 4:Check Palindrome
5:Exit

Enter choice : 4
Enter string : rait
String is not palindrome.
Do you want to continue (y/n) : n


*/
