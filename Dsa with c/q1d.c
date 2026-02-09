// Argument with return value
#include<stdio.h>
#include<math.h>

// Maximum of three numbers
int maximumOf3(int a, int b , int c){
    int max = a;
    if(b>a)max = b;
    if(c>a)max = c;
    return max;
}

// return the power of a number 
int power(int n, int pow){
    int res= n;
    for(int i = 1; i<=pow; i++){
        res = res*pow;
    }
    return res;
}

//ArmStrong
int armStrong(int n){
    int org = n;
    int num = 0;
    int len = 0;
    while(n>0){
        n/10;
        len++;
    }
    n = org;
    while(n>0){
        int temp = n%10;
        num = num+power(temp, len);
        n/10;
    }
    if(num == org){
        return 0;
    }
    else return 1;
}

int main(){
    // int max = maximumOf3(2, 3, 1);
    // int res = power(4, 2);
    // printf("%d\n", res);

    // armStrongCheck
    int res = armStrong(153);
    if (res==0)
    {
        printf("the number is armstrong");
    }
    else printf("the number is not armstrong");
    return 0;
}