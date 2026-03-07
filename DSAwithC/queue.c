#include<stdio.h>
// Implementing queue 
#define max 100

int front = -1;
int rear = -1;
int arr[max];
void enqueue(int n){
    if(rear==max-1){
        printf("Queue is full!");
    }
    else{
        rear++;
        arr[rear]= n;
        if(front==-1) front++;
    }
}
void dequeue(){
    if(front==-1){
        printf("Queue is empty");
    }
    else{
    front++;
    if(front>rear){
        front=-1;
        rear = -1;
    }
}
}
void display(){
    if(front==-1 || front>rear){
        printf("queue is empty");
    }
    for(int i = front;i<=rear;i++){
        printf("%d\n", arr[i]);
    }
}

int main(){
    enqueue(5);
    enqueue(6);
    enqueue(23);
    display();

    dequeue();
    dequeue();
    dequeue();
    dequeue();

    display();
}