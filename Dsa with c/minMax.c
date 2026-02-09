#include<stdio.h>

// Functions to check maximum, minimum and average
int maximum(int a, int b){
    if(a>b)return a;
    else return b;
}
int minimum(int a, int b){
    if(a<b)return a;
    else return b;
}
int average(int a, int b){
    return (a+b)/2;
}

int main(){
    int max = maximum(10, 3);
    int min = minimum(10, 2);
    int avg = average(3, 11);
    printf("maximum: %d\n minimum: %d\n average: %d\n", max, min, avg);
    return 0;
}