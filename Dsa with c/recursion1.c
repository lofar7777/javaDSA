#include<stdio.h>
void fibonacci(int n, int a, int b){   
        int c = a + b;
        if(n < 1){
            return;
        }
        printf("%d ,", c);
        fibonacci(n-1, b, c);

    }
int main(){
    printf(" 0, 1, ");
    fibonacci(10, 0, 1);
    return 0;
}