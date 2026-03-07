// #include<stdio.h>
// int top = -1;
// int max = 100;
// int stack[max];
// int n;

// int main(){
//     int ch;
//     printf("select the operation to perform:\n 1-> push() 2-> pop() 3-> display()\n");
//     scanf("%d", &ch);
//     switch(ch){
//         case 1: if(top==max-1){
//             printf("Stack is full\n");
//         }
//         else{
//             top++;
//             printf("Enter the element to push: ");
//             scanf("%d", n);
//             push(n);
//     }
//     case 2: if(top==-1) printf("")
// }


// }



#include<stdio.h>
#define max 100
int arr[max];
int top = -1;
void push(int x);
void pop();
void display();

int main()
{
    while(1){
        printf("Select choice 1 push 2 pop 3 display\n");
    
    int ch;
    scanf("%d", &ch);
    switch(ch){
        case 1:{
            printf("Element to be inserted");
            int n;
            scanf("%d", &n);
            push(n);
            break;
        }
        case 2:{
            pop();
            break;
        }
        case 3:{
            display();
            break;
        }
        default: printf("Invalid input");

    }}
}
void push(int n){
    if(top==max-1){
        printf("Stack is full");
    }
    else{
        top++;
        arr[top] = n;
    }
}
void pop(){
    if(top==-1){
        printf("Stack is empty");
    }
    else{
        top--;
    }
}
void display(){
    if(top==-1){
        printf("Stack is empty");
    }
    else{
        for(int i = 0; i<=top; i++){
            printf("%d\n", arr[i]);
        }
    }
}
