// no arguments and return value
#include<stdio.h>

// sum of first N numbers
int sumFirstNnums(){
    int n = 10;
    int sum = 0;
    for(int i = 1; i<=n; i++){
        sum = sum + i;
    }
    return sum;
}
//factorial
int factorial(){
    int n = 5;
    int fact = 1;
    for(int i = 1; i<=n; i++){
        fact *= i;
    }
    return fact;
}

int main(){
    int res = sumFirstNnums();
    int fact = factorial();
    printf("The sum of first 10 numbers is: %d ", fact);
}