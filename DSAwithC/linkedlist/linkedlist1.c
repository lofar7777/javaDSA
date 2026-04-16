// We need to create a struct that stores a value and a pointer that stores the address of the next node of the list
#include<stdio.h>
#include<stdlib.h>
struct node{
    int val;
    struct node *next;
};

int main(){
    struct node *head=NULL, *ptr=NULL;
    int n, flag=0;
    scanf("%d", &n);
    for(int i = 0;i<n;i++){
        struct node *temp = (struct node*) malloc(sizeof(struct node));
        if(temp ==NULL){
            printf("Memory not allocated");
        }
        temp->next= NULL;
        if(flag==0){
            head = temp;
            ptr = temp;
            flag = 1;
            printf("node %d created\n", i);
        }
        else{
            ptr->next= temp;
            ptr = temp;
            printf("node %d created\n",i);
        }
        
    }
    printf("%p\n", head);
    // struct node *temp = (struct node*) malloc(sizeof(struct node));
    struct node *temp = head;
    printf("%p\n", temp);
    while(temp!=NULL){
            int x;
            scanf("%d", &x);
            temp->val = x;
            temp = temp->next;
    }
    struct node *temp2= head;
    // int i = 0;
    int count = 0;
    while(temp2!=NULL){
        // printf("Value at node %d is %d and address is%p \n",i, temp2->val, temp2);
        // temp2 = temp2->next;i++;
        count++;
    }
    int pos=count/2;
    int i = 0;

    while(temp2!=NULL){
        if(i==pos){
            struct node *tempAdd = temp2->next;
            struct node *newNode = (struct node*) malloc (sizeof(struct node));
            temp2->next = newNode;
            newNode->val = 20;
            newNode->next = tempAdd;
        }
        temp2 = temp2->next;
        i++;
    }
    while(temp2!=NULL){
        // printf("Value at node %d is %d and address is%p \n",i, temp2->val, temp2);
        // temp2 = temp2->next;i++;
        count++;
    }


}