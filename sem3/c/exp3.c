// Experiment no 3
#include <stdio.h>
#include <string.h>
#include <math.h>

#define MAX 20

int isoperand(int);
void push(int);
void pop();
int op1 , op2;
char postfix[MAX];
int stack[MAX];
int len,i,top=-1;
int main(){
int res=0;
printf("Enter the postfix operation : ");
scanf("%s" , postfix );
len = strlen(postfix);

for(i=0;i<len;i++){

    if(isoperand(postfix[i] - '0')){
        push( (postfix[i] - '0'));
    }else{

        op2= stack[top];
        pop();
        op1 = stack[top];
        pop();
        if(postfix[i] == '+'){
            res = op1 + op2;
        }else if(postfix[i] == '-'){
            res = op1 - op2;
        }
        else if(postfix[i] == '*'){
            res = op1 * op2;
        }
        else if(postfix[i] == '/'){
            res = op1 / op2;
        }
        else if(postfix[i] == '^'){
            res = pow(op1, op2);

        }
        push(res);


    }

}

if(top==0)
printf("%d",stack[top]);
else
printf("Invalid Postfix Expression.");
}

int isoperand(int ch){
    if(ch>=0 && ch<10)
    return 1;
    else
    return 0;

}

void push(int ch){
top++;
stack[top] = ch;

}

void pop(){
top--;
}

/*
Enter the postfix operation : 6523+8*+3+*
288

Enter the postfix operation : 6523+8*+3+
Invalid Postfix Expression.


*/
