#include<stdio.h>


// ques 1 - Find the maximum element in the array
void maxElement(){
    int arr[]= {2 , 3, 4, 5, 6, 7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int max = arr[0];
    for(int i = 0;i<n; i++){
        if(arr[i] >max) max = arr[i];
    }
}

// Array sorting check
// Check if the array is sorted in ascending order or not
void isSorted(){
    int arr[]= {2 , 3, 4, 5, 6, 7, 1};
    int len = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i<len; i++){
        if(i!=len){
            if(arr[i]>arr[i+1]) printf("The array is not sorted");
            else printf("the array is sorted");
            return;
        }
        
    }
}

void evenOdd() {
    int arr[] = {2, 3, 4, 5, 6, 3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int even = 0;
    int odd = 0;
    for(int i = 0; i<n; i++){
        if(arr[i]%2 ==0){
            even++;
        }
        else odd++;
    }
    printf("Even: %d and Odd: %d", even, odd);
}
int main(){
    isSorted();
}