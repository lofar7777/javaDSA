#include<stdio.h>
// int main(){
//     int arr[] = {1, 4, 2, 11, 10, 20, 15};
//     int n = sizeof(arr)/sizeof(arr[0]);

//     for(int i = 0; i<n-1; i++){
//         int min = i;
//         // find smallest element
//         for(int j = i+1; j< n; j++){
//             if(arr[j]<arr[min]){
//                 min = j;
//             }
//         }
//         // swap elements
//         if(min !=i){
//             int temp = arr[i];
//             arr[i] = arr[min];
//             arr[min] = temp;
//         }
//     }
//     // print sorted array
//     for(int i = 0; i<n; i++){
//         printf("%d\t", arr[i]);
//     }
// }



// Having an array we have to iterate the whole
// then ->
// During each iteration we'll select the smallest item from the
// unsorted partition and move it to the sorted partition.
// we have to use a current minimun and a current item

// Pseudo code
// for(j = 0; j<n-1; j++)
//  int iMin = j;
//  for(i=j+1; i<n; i++)
//      if(a[i]<a[iMin])
//          iMin = i;
//  if(iMin!=j)
//  swap(a[j], a[iMin]);

//  Time complexity - O(n^2)


// self
int main(){
    int arr[] = {2, 4, 1, 11, 7, 20, 14};
    int n = 7;
    for(int i = 0; i<n-1;i++){
        int min = i;
        for(int j = i+1; j<n;j++){
            if(arr[min]>arr[j]){
                min=j;
            }
        }
        if(min!=i){
            int temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }
    for(int i = 0; i<n; i++){
        printf("%d\t", arr[i]);
    }
}

