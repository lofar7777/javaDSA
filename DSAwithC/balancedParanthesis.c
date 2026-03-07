#include<stdio.h>
// Balanced parenthess function for all three conditions 
// *important
int isBalancedAll(char arr[]){
    int i = 0;
    int top = 1;
    while(arr[i]!='\0'){
        if(arr[i]=='('|| arr[i]=='{' || arr[i]=='['){
            top++;
        }
        else if(arr[i]==')'|| arr[i]=='}' || arr[i]==']'){
            if(top==-1){
                return 0;
            }
            else{
                top--;
            }
        }
        i++;
    }
    if(top==-1){
        return 1;
    }
    else{

    return 0;}
}


// Balanced parenthesis function for only push and pop function
int isBalanced(char arr[]){
    int i = 0;
    int top = -1;
    while(arr[i]!='\0'){
        switch (arr[i])
        {
        case '(':
            top++;
            break;
        
        case ')':
            if(top==-1) return 0;
            else top--;
        }
        i++;
    }
    if(top==-1) return 1;
    else return 0;
}

int main(){
    char arr[50];
    printf("Enter the paranthesis equation: ");
    scanf("%s", arr);
    int res = isBalancedAll(arr);
    int res1 = isBalanced(arr);
    if(res1){
        printf("The equation is balanced.\n");
    }
    else printf("The equation is not balanced.\n");
}
