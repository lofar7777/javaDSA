#include<stdio.h>
#include<string.h>

#define SIZE 100

char stack[SIZE];
int top = -1;

void push(char ch){
    stack[++top] = ch;
}
char pop(){
    return stack[top--];
}

int isMatchingPair(char open, char close){
    if(open== '(' && close ==')') return 1;
    if(open=='{' && close == '}') return 1;
    if(open=='[' && close==']') return 1;
    return 0;
}

int main(){
    char expr[SIZE];
    int i;
    int balanced = 1;

    printf("Enter expression: ");
    scanf("%s", expr);

    for(i = 0; i<strlen(expr);i++){

        //If opening bracket -> push
        if(expr[i] =='(' || expr[i] =='{' || expr[i] =='['){
            push(expr[i]);
        }

        //If closing bracket
        else if(expr[i] ==')' || expr[i] =='}' || expr[i]==']'){
            if(top ==-1){
                balanced = 0;
                break;
            }

            char popped = pop();
            if(!isMatchingPair(popped, expr[i])){
                balanced = 0;
                break;
            }
        }
    }
    if (top!=-1)
        balanced = 0;

    if(balanced)
        printf("Balanced\n");
    else
        printf("Not Balanced\n");

    return 0;
    
}