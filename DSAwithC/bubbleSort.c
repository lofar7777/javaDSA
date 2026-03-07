#include<stdio.h>
int main(){
    int arr[] = {2, 4, 1, 4, 23 ,11, 3};
    int n = 7;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    for(int i = 0;i<n;i++){
        printf("%d\n", arr[i]);
    }
}