// Circular linked list

#include<stdio.h>
#include<stdlib.h>

struct cnode{
    int val;
    struct cnode *next;
};

int countNodesC(struct cnode *head){
    if(head==NULL) return -1;
    struct cnode *temp = head;
    int count= 0;
    while(temp!=head){
        count++;
        temp = temp->next;
    }
    return count;
}

//insert at position
struct cnode *insertAtPosition(struct cnode *head, int val, int pos){
    struct cnode *newNode = (struct cnode*) malloc(sizeof(struct cnode));
    if(newNode==NULL){
        printf("Memory not allocated!\n");
        return head;
    }
    newNode->val = val;
    //Empty list
    if(head==NULL){
        newNode->next = newNode;
        return newNode;
    }
    //Insert at head 
    if(pos==0){
        struct cnode *last = head;
        while(last->next!=head){
            last = last->next;
        }
        newNode->next = head;
        head = newNode;
        last->next = head;
        return head;
    }
    struct cnode *temp = head;
    int i = 0;
    while(i<pos-1&& temp->next!=head){
        temp= temp->next;
        i++;
    }
    newNode->next = temp->next;
    temp->next = newNode;
    return head;
}

//Delete from position
struct cnode *deleteFromPosition(struct cnode *head, int pos){
    if(head==NULL) return NULL;

    //single node
    if(head->next==head){
        free(head);
        return NULL;
    }
    //Delete from beggining
    if(pos==0){
        struct cnode *last = head;
        while(last->next!=head){
            last = last->next;
        }
        struct cnode *temp = head;
        head = head->next;
        free(temp);
        last->next = head;
        return head;
    }
    //delete from position
    struct cnode *temp = head;
    int i = 0;
    while(i<pos-1 && temp->next!=head){
        temp = temp->next;
        i++;
    }
    struct cnode *del = temp->next;
    temp->next = del->next;
    free(del);
}

void countEvenOdd(struct cnode *head, int *even, int *odd){
    if(head ==NULL){
        return;
    }
    struct cnode *temp = head;
    (*odd)= 0;
    (*even) = 0;
    do{
        if(temp->val%2==0)
        (*even)++;
        else (*odd)++;
    }
    while(temp!=head);
    // while(temp!=head){
    //     if(temp->val%2==0) (*even)++;
    //     else (*odd)++;
    // }
   
}

// function to implement a circular linked list
struct cnode *implementListC(){
    struct cnode *head=NULL, *ptr=NULL;
    int n;
    int flag = 0;
    scanf("%d", &n);
    for(int i = 0;i<n;i++){
        struct cnode *temp = (struct cnode*) malloc(sizeof(struct cnode));
        if(temp==NULL){
            printf("Memory not allocated!\n");
            return head;
        }
        scanf("%d",&temp->val);
        
        if(head==NULL){
            head = temp;
            ptr = temp;
            temp->next = head; //circular
        }
        else{
            ptr->next = temp;
            temp->next = head;  //maintain circular
            ptr = temp;
        }
    }
    return head;
}


int main(){
    struct cnode *head = implementListC();
    int even= 0, odd=0;
    countEvenOdd(head, &even, &odd);
}

// struct node{
//     int val;
//     int arr[20];
//     char arr[30];
//     struct node *next;
// };
// int size = 4+80+30+8;