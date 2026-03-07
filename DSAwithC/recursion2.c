#include<stdio.h>
int main(){
    int sumNums(int i, int sum){
        // base case
        if(i<0){
            return sum;
        }
        // Function
        sumNums(i-1,sum+i);
        return sum;
    }
    int res = sumNums(5, 0);
    printf("%d", res);
}