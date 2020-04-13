
#include <stdio.h>
#define max 3
int stack[max];
int top=-1;

int main(){

push(4);
push(3);
push(2);
push(1);
pop();
display();


}

void push(int a){

    if(top==max-1)
        printf("Stack Full\n");
    else
    {
        top++;
        stack[top] = a;
    }

}

void display(){
    for(int i=0;i<=top;i++)
    printf("%d\n" , stack[i]);
}

void pop(){

    if(top==-1)
        printf("Stack is empty.");
    else
        top--;
}

