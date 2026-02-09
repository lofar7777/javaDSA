#include<stdio.h>
// Function to check whether the number is positive negative or zero
void numCheck(int n){
    if(n>0){
        printf("%d is positive\n", n);
    }
    else if(n<0){
        printf("%d is negative\n", n);
    }
    else
    printf("the number is a zero\n");
}

int main(){
    numCheck(-45);
    return 0;
}