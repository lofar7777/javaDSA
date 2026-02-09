// Array and function based questions
// function to read and display array elements
#include<stdio.h>
int arrayElements(int arr[], int n){
    for(int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i<n; i++){
        printf("%d\n", arr[i]);
    }

}
int main(){
    int arr[] = {12, 2, 3, 3, 4, 5, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    arrayElements(arr, n);
}