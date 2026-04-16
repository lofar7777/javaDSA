// Circular and double linked list creation

#include<stdio.h>
#include<stdlib.h>

struct cnode{
    int value;
    struct cnode *next;
};
// struct dnode{
//     int value;
//     struct dnode *next;
//     struct dnode *prev;
// };
void display(struct cnode *head){
    struct cnode *temp = head;
    while(temp!=NULL){
        printf("%d", temp->value);
        temp = temp->next;
    }
}

int searchElement(struct cnode *head, int key){
    struct cnode *temp = head;
    int i = 1;
    while(temp!=NULL){
        if(temp->value ==key){
            printf("The key is found at %d\n", i);
        }
        i++;
    }
}

struct cnode *insertAtBeginning(struct cnode *head, int data){
    struct cnode *temp = (struct cnode*) malloc(sizeof(struct cnode));
    if(temp ==NULL){
        printf("Node Not created\n");
        return head;
    }
    temp->value = data;

    temp->next = head;
    head = temp;
    return head;
} 

// struct cnode *deleteFromBeginning(struct cnode *head){
//     //edge case : empty
//     if(head ==NULL){
//         printf("List is empty\n");
//         return head;
//     }
//         struct cnode *temp = head;
//         head = head->next;
//         free(temp);
//         return head;
// }

struct cnode *deleteFromBeginning(struct cnode *head){
    //edge case : empty
    if(head ==NULL){
        printf("List is empty\n");
        return head;
    }
    if(head->next = head){
        free(head);
        return NULL;
    }
    struct cnode *temp = head;
    while(temp->next!=head){
        temp = temp->next;
    }
    //temp is now last node
    struct cnode *oldHead = head;
    head = head->next;
    //fix last node
    temp->next = head;
    //free oldhead
    free(oldHead);
    return head;
}

struct cnode *deleteFromEnd(struct cnode *head){
    if(head==NULL){
        printf("The list is empty\n");
        return NULL;
    }
    if(head->next ==head){
        free(head);
        return NULL;
    }
    struct cnode *temp = head;
    struct cnode *prev = NULL;
    while(temp->next!=head){
        prev = temp;
        temp = temp->next;
    }
    //temp is now last node
    // prev = secondlast node
    prev->next = head;
    free(temp);
    return head;
}
struct cnode *deleteFromPos(struct cnode *head, int position){
    if(head==NULL){
        printf("List is empty\n");
        return NULL;
    }
    if(position ==1){
        struct cnode *temp = head;
        head = head->next;
        free(temp);
        return head;
    }
    struct cnode *curr = head;
    struct cnode *prev = NULL;
    int i = 0;
    while(curr!=NULL&& i<position){
        prev = curr;
        curr = curr->next;
        i++;;
    }
    if(curr==NULL){
        printf("Invalid Position\n");
        return head;
    }
    //Delete Node
    prev->next = curr->next;
    free(curr);
    return head;
}


int main(){
    //circular linked list
    // struct cnode *head = NULL, *ptr = NULL;
    // int n;
    // scanf("%d", &n);
    // int flag = 0;
    // int x = 0;
    // for(int i = 0;i<n;i++){
    //     struct cnode *temp = (struct cnode*) malloc(sizeof(struct cnode));
    //     if(temp==NULL){
    //         printf("Memory not created!\n");
    //         return 0;
    //     }
        
    //     temp->value = x++;
    //     temp->next=head;
    //     if(flag==0){
    //         head = temp;
    //         ptr = temp;
    //         flag=1;
    //     }
    //     else{
    //         ptr->next = temp;
    //         ptr = temp;
    //     }
    // }3

    //Doubly linked list creation
    struct cnode *head=NULL, *tail=NULL;
    int flag = 0;
    int n = 5;
    for(int i = 0;i<5;i++){
        struct cnode *temp = (struct cnode*) malloc(sizeof(struct cnode));
        // struct dnode *tempprev = (struct dnode*) malloc(sizeof(struct dnode));
        if(temp==NULL){
            printf("Node not created!\n");
            return 0;
        }
        int x;
        scanf("%d", &temp->value);
        temp->next=NULL;
        // temp->prev=NULL;
        if(flag ==0){
            head = temp;
            tail = temp;
            flag = 1;
        }
        else{
            tail->next = temp;
            // temp->prev = tail;
            tail = temp;
        }
    }
    display(head);
    head = insertAtBeginning(head, 10);
    display(head);
}