
#include <stdio.h>

#include <iostream>
#include <string.h>
#include <ctype.h>
#define maxs 20


using namespace std;
char infix[maxs] , postfix[maxs] , s[maxs];
int k,j;
int top=-1;

void display(){
    for(int i=0;i<=top;i++)
    printf("%d\n" , s[i]);
}
void push(char a){

    if(top==maxs-1)
        printf("Stack Full\n");
    else
    {
        top++;
        s[top] = a;
    }

}

int priority(char c){
    switch(c){

        case '^':
            return 11;
        case '*':
            return 10;

        case '/':
            return 9;
        case '%':
            return 8;
        case '+':
            return 7;
        case '-':
            return 6;
        default:
            return 1;
    }

}
int pop(){

    if(top==-1){
        printf("Stack is empty.");
        return 0;
        }
    else
       return(s[top--]);
}

int main(){
char c;
cout<<"Enter infix\n";
cin>>infix;

for(int i=0;infix[i]!='\0';i++){

        // STEP ! CHECK FOR (
        if(infix[i]=='('){
            push(infix[i]);
        }else if(isalnum(infix[i]) || isdigit(infix[i])){
            postfix[j++] = infix[i];

        }else if(infix[i] == ')'){

                while(s[top]!= '('){
                    postfix[j++] = pop();

                }
                pop();



        }else{
                 while(priority(infix[i]) <= priority(s[top]) && top!=-1 ){
                        postfix[j++] = pop();

                }
                push(infix[i]);


        }


}

postfix[j] ='\0';
cout<<postfix;
while(top!=-1)
cout<<s[top--];


}





