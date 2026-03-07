#include<stdio.h>
#include<unistd.h>
int main(){
    printf("Hello\n");
    fork();
    fork();
    printf("AAchuus\n");
}