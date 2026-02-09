// #include<stdio.h>
// int main(){
//     int m, n;
//     int arr[m][n];
//     scanf("%d %d", &m, &n);
//     int len = sizeof(arr)/sizeof(arr[0]);
//     printf("%d", len);

// }
// Maximum product of two elemtns in the array
#include<stdio.h>
int main(){
    int arr[] = {1, 2, 3, 4, 5, 6};
    int maxProduct = 0;
    int len = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i<len;i++){
        for(int j = 0; j<len;j++){
            if(i!=j){
                int product = arr[i]*arr[j];
                if(product>maxProduct){
                    maxProduct=product;
                }
            }
        }
    }
    printf("%d", maxProduct);
}