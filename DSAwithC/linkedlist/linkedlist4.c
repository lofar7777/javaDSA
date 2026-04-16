//singly linked list
#include<stdio.h>
#include<stdlib.h>

struct node{
    int val;
    struct node *next;
};
// Assignment 
int countNodes(struct node *head){
    int count;
    return count;
}
void display(struct node *head){
    struct node *temp = head;
    while(temp!=NULL){
        printf("%d\n", temp->val);
        temp=temp->next;
    }
}

int searchElement(struct node *head, int key){
    struct node *temp = head;
    while(temp!=NULL){
        if(temp->val ==key){
            return temp->val;
        }
        return 0;
    }
}

struct node *insertAtBeginning(struct node *head, int data){
    // struct node *temp = head;
    struct node *newNode = malloc(sizeof(struct node));
    if(newNode==NULL){
        printf("Memory not allocated!\n");
        return head;
    }
    newNode->val=data;
    newNode->next = head;
    head = newNode;
    return head;
}

struct node *insertAtEnd(struct node *head, int data){
    struct node *newNode = malloc(sizeof(struct node));
    struct node *temp = head;
    if(newNode==NULL){
        printf("Memory not allocated!\n");
        return head;
    }
    newNode->val = data;
    newNode->next = NULL;
    //case: empty list
    if(head==NULL){
        return newNode;
    }
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = newNode;  
    return head;
}

struct node *insertAtPosition(struct node *head, int val, int pos){
    struct node *newNode = malloc(sizeof(struct node));
    if(newNode==NULL){
        printf("Memory not allocated\n");
        return head;
    }
    newNode->val = val;
    newNode->next = NULL;
    //Case1: insert at head
    if(pos==0|| head==NULL){
        newNode->next = head;
        head = newNode;
        return head;
    }
    int i = 0;
    struct node *temp = head;
    while(temp!=NULL&&i<pos-1){
        temp=temp->next;
        i++;
    }
    if(temp==NULL){
        printf("Invalid position!\n");
        free(newNode);
        return head;
    }
    //insert node
    newNode->next = temp->next;
    temp->next = newNode;
    return head;
}

struct node *deleteFromBeginning(struct node *head){
    struct node *temp = head;
    if(temp==NULL){
        printf("The list is empty!\n");
        return NULL;
    }
    head = head->next;
    free(temp);
    return head;
}

struct node *deleteFromEnd(struct node *head){
    
    //Case1: Empty list
    if(head==NULL){
        printf("List Empty!\n");
        return NULL;
    }
    //Case2: Only one node
    if(head->next = NULL){
        free(head);
        return NULL;
    }
    struct node *temp = head;
    struct node *prev = NULL;

    //Traverse to last node
    while(temp->next!=NULL){
        prev = temp;
        temp = temp->next;
    }
    //temp = last node
    //prev = second last
    prev->next = NULL;
    free(temp);

    return head;
}

struct node *deleteFromPosition(struct node *head , int position){
    if(head==NULL){
        printf("NO Linked List!\n");
        return NULL;
    }
    //
    struct node *temp = head;
    struct node *prev = NULL;
    int i = 0;
    while(temp!=NULL&&i<position-1){
        prev = temp;
        temp = temp->next;
        i++;
    }
    //Edge case 2 : if position invalid
    if(temp==NULL){
        printf("Invalid Position!\n");
        return head;
    }
    prev->next = temp->next;
    free(temp);

    return(head);
}

struct node *reverseList(struct node *head){
    struct node *prev = NULL;
    struct node *curr = head;
    struct node *next = NULL;

    while(curr!=NULL){
        next = curr->next;    //step1: store next
        curr->next = prev;    //step2: reverse list
        prev = curr;          //step3: move prev
        curr = next;          //step4: move curr
    }
    return prev;
}

// int findMiddle(struct node *head){
//     if(head ==NULL){
//         printf("List is empty\n");
//         return -1;
//     }
//     struct node *slow = head;
//     struct node *fast = head;
//     while(fast!=NULL && fast->next !=NULL){
//         slow = slow->next;
//         fast = fast->next->next;
//     }
//     return slow->val;
// }

void countEvenOdd(struct node *head, int *countEven, int *countOdd){
    *countEven= 0;
    *countOdd= 0;
    struct node *temp = head;
    if(head==NULL){
        printf("List is empty\n");
        return;
    }
    while(temp!=NULL){
        if(temp->val%2==0){
            *countEven++;
        }
        else
            *countOdd++;
        temp= temp->next;
    }
    printf("Even: %d, Odd: %d\n", *countEven, *countOdd);
}

void findMinMax(struct node *head, int *min, int *max){
    
    if(head==NULL){
        printf("List is empty!\n");
        return;
    }
    *(min) = head->val, *(max) = head->val;
    struct node *temp = head;
    while(temp!=NULL){
        if(temp->val>(*max)){
            *(max) = temp->val;
        }
        if(temp->val< (*min)){
            *(min) = temp->val;
        }
        temp= temp->next;
    }
    printf("MIN: %d and MAX: %d\n", *(min), *(max));
    return;
}

int findMiddle(struct node *head){
    if(head==NULL){
        printf("list is empty\n");
        return -1;
    }
    struct node *slow = head;
    struct node *fast = head;
    while(fast!=NULL && fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow->val;
}

int main(){
    struct node *head = NULL, *ptr = NULL;
    int flag = 0;
    int n; 
    scanf("%d", &n);
    for(int i = 0;i<n;i++){
        struct node *temp = malloc(sizeof(struct node));
        if(temp==NULL){
            printf("Memory not allocated!\n");
            return 0;
        }
        temp->next = NULL;
        int x;
        scanf("%d", &x);
        temp->val=x;
        if(flag ==0){
            head = temp;
            ptr = temp;
            flag=1;
        }
        else{
            ptr-> next = temp;
            ptr= temp;
        }
    }
    display(head);
    head = insertAtBeginning(head, 10);
    display(head);
    head = insertAtEnd(head, 50);
    display(head);
    int even=0, odd=0;
    countEvenOdd(head, &even, &odd);
    int middle= findMiddle(head);
    printf("THe middle of the ll is: %d\n", middle);

}