// no argument no return value
// to print first N numbers 

#include<stdio.h>

// function

void printnNums(){
    int n = 5; 
    for(int i = 1; i<=n; i++){
        printf("%d\n", i);
    }
}

void printEven(){
    int n = 100;
    for(int i = 1; i<=n; i++){
        if(i%2==0){
            printf("%d\n", i);
        }
    }
}

void printMultiple(){
    int n = 6;
    for(int i = 1; i<=10; i++){
        printf("%d\n", i*n);
    }
}

void fibonacci(){
    int a = 0; 
    int b = 1; 
    
    int n = 10;
    printf("%d, %d, ", a, b);
    for(int i = 1; i<=n; i++){
        int c = a + b;

        printf("%d  ", c);
        a = b;
        b = c;
    }
}

int main(){

    printnNums();
    printMultiple();
    fibonacci();
}