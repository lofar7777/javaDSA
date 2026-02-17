#include<stdio.h>
int main(){
  // bubble sort 
  int arr[] = {3, 5, 2,4, 6, 20, 11};
  int n = sizeof(arr)/sizeof(arr[0]);
  for(int i = 0; i<n; i++){
    for(int j = 0; j<n-1; j++){
    if(arr[j] >arr[j+1]){
      // swap both elements
      int temp = arr[j];
      arr[j] = arr[j+1];
      arr[j+1] = temp;
      }
    }
}
  for(int i = 0; i<n; i++){
    printf("%d", arr[i]);
  }
}
