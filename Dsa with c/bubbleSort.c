#include<stdio.h>
int main(){
  // bubble sort 
  int arr[] = {3, 5, 2,4, 6, 20, 11};
  int n = sizeof(arr)/sizeof(arr[0]);
  for(int i = 0; i<n; i++){
    int swapped = 0;                  // we can use this swapped flag for optimization 
                                      // if the condition in the inner loop is not true for any iteration of the loop, it means that the array is already sorted, so we don't need to check again. 
                                      // so this reduces the time complexity
    for(int j = 0; j<n-1-i; j++){     // using n-1-i for optimization because once the inner for loop is executed,
                                      // the largest element gets to the end of the array, so we don't need to traverse it again and again.
    if(arr[j] >arr[j+1]){
      // swap both elements  
      swapped++;
      int temp = arr[j];
      arr[j] = arr[j+1];
      arr[j+1] = temp;
      }
    }
    if(swapped==0){
        break;
    } 
}
  for(int i = 0; i<n; i++){
    printf("%d\t", arr[i]);
  }
}
