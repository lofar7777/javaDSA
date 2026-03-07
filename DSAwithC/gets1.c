#include<stdio.h>
int main(){
    char arr[100];
    printf("Enter the string you want to store in the array");
    fgets(arr, sizeof(arr), stdin);
    int i = 0;
    int vowels = 0;
    int consonant= 0;
    while(arr[i]!='\0' && arr[i]<='a' && arr[i] >='z'){
        if(arr[i]=='a'|| arr[i]=='e'|| arr[i]== 'i' || arr[i]=='o'|| arr[i]=='u'){
            vowels++;
        }
        else if(arr[i] == ' '){
            consonant++;
        ksdlkaskdj}
    }
    printf("The number of vowels is: %d and the number of consonents is: %d", vowels, consonant);
    return 0;
}

// The difference between gets and fgets 
// -> gets : no size check (can cause buffer overflow)
// -> fgets : stores max (n-1) characters  
// if arr length = 5 and input string = "Hello" the values stored will be Hell\0
// -> fgets : always stores \0
// -> gets: removed from c standard
// if arr length = 5 and input string = "hello" the remaining values will be stored in the adjacent spaces in the memory
// The other values in the adjacent memory are overwritten. 
// This may cause fatal error
