#include<stdio.h>
#include<stdlib.h>

struct node {
    int value;
    struct node *next;
};

int main(){
    int n; 
    printf("Enter the size of the linkedlist\n ");
    scanf("%d", &n);
    int flag = 0;
    struct node *head=NULL, *ptr = NULL;
    for(int i = 0;i<n;i++){
        struct node *temp = (struct node*) malloc(sizeof(struct node));
        if(temp==NULL){
            printf("Memory not created!\n");
        }
        if(flag==0){
            head = temp;
            ptr = temp;
            flag = 1;
        }
        else{
            ptr-> next = temp;
            ptr = temp;
        }
    }
}