#include<stdio.h>
// using if else to check if the number is positive or not
void numCheck(int a){
    if (a%2==0)
    {
        printf("The number is positive");
    }
    else printf("Number is not positive");
    
}

// Is the no. divisible by 5 or not
void isDivisibleBy5(int n){
    if(n%5==0) printf("Yes");
    else printf("No");
}

// No. greater than 100 or not
void isGreater(int n){
    if(n>100) printf("Yes");
    else printf("No");
}

int main(){
    isGreater(90);
    printf("%d",90%8);
}