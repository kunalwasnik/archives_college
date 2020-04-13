#include <stdio.h>
#include <string.h>
#define MAX 20

// function prototype
void push(char);
void pop();
int isoperand(char);
int prec(char);
// global variables
int check(char s[20]);
int top=-1;
char infix[MAX] , postfix[MAX],stack[MAX] ,error[MAX];
int i , j=0,len;
int eval;
int main(){

printf("Enter infix expression : ");
scanf("%s" , infix);
len = strlen(infix);
eval = check(infix);
if(eval == 0)
printf("Invaid Infix Expression");

else if(eval == 1){
for(i=0;i<len;i++){

    if(isoperand(infix[i]) ==1){

        postfix[j] = infix[i];
        j++;
    }else{

        if(infix[i] == '(' ){
            push(infix[i]);
        }
        else if(infix[i] == ')'){

            while(stack[top] !='(' && top!=-1){
                postfix[j] = stack[top];
                j++;
                pop();
            }
            pop();


        }
        else if(prec(infix[i]) < prec(stack[top]) ){
        //
                while(prec(stack[top]) > prec(infix[i]) && top!=-1){

                    postfix[j] = stack[top];
                    j++;
                    pop();
                }
                push(infix[i]);
        // Greater precedence
        }else if(prec(infix[i]) > prec(stack[top]) ){

                push(infix[i]);

        }


    }

}

postfix[j] = '\0';
printf("%s",postfix);
while(top!=-1){
printf("%c" , stack[i]);
top--;
}


}
}

int isoperand(char ch){
    if( (ch >='a'&& ch<='z') || (ch >='A'&&ch<='Z') )
        return 1;
    else
        return 0;
}
void push(char ch){

    top++;
    stack[top] = ch;

}
void pop(){
top--;
}

int check(char s[20]){

    for(int k=0;k<len;k++){
        if(s[k] == '('){
           // printf("%c" , s[k]);
            push(s[k]);
        }else if(s[k] == ')'){
            pop();
        }
        }

        if(top==-1)
            return 1;
        else
            return 0;




}
int prec(char ch){

    switch(ch){
        case '^':
            return 10;
            break;
        case '/':

            return 9;
            break;
        case '*':
            return 8;
            break;
        case '+':
            return 7;
            break;
        case '-':
            return 6;
            break;
         default:
            return -1;

    }

}

/* OUTPUT

Enter infix expression : A+B*C-D/E*H
ABC*+DE/H*-

Enter infix expression : ((A-(B+C))*D)^(E+F)
ABC+-D*EF+^

Enter infix expression : ((A-(B+C)*D)^(E+F)
Invaid Infix Expression




*/
