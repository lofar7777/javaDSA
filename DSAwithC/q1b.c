// Arguments and no return 
#include<stdio.h>

// Even or odd
void evenOdd(int n){
    if(n%2==0){
        printf("The number is even.");
    }
    else
    printf("The number is odd");
}

// Largest of two
void largestOf2(int a, int b){
    if(a>b)printf("A is largest");
    else printf("B is largest");
}

// Factorial
void factorial(int n){
    int fact = 1;
    for(int i = 1; i<=n; i++){
        fact = fact *i;
    }
    printf("The factorial is: %d", fact);
}

// Palindrome
void isPalindrome(int n){
    int org = n;
    int num = 0;
    while(n>0){
        int temp = n%10;
        num = (num*10)+ temp;
        n/10;
    }
    n = org;
    if(num = org){
        printf("The number is a palindrome");
    }
    else
    printf("The number is not a palindrome");
}

// Sum of digits
void digiSum(int n){
    int sum = 0;
    while(n>0){
        int temp = n%10;
        sum = sum + temp;
        n/10;
    }
    printf("%d", sum);
}


int main(){
factorial(5);
}