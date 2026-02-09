#include<stdio.h>
void numCheck(int n){
    if(n%5==0){
        
        if(n%5==0 && n%3==0){
        printf("Number is divisible by 5 and 3\n");
    }
    else{
        printf("Number is divisible by 5 only\n");
    }
    }
    
    
    if(n%2==0){
        printf("Number is even\n");
    }
    else printf("Number is odd\n");
}
int main(){
    numCheck(30);
    return 0;
}