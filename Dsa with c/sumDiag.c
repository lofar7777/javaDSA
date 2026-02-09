#include<stdio.h>

// Sum of diagonal
// int main(){
//     int m = 3;
//     int arr[m][m];
//     for(int i = 0; i<m; i++){
//         for(int j = 0; j<m; j++){
//             scanf("%d", &arr[i][j]);
//         }
//     }

//     for(int i = 0; i<m;i++){
//         int sumDiag1 = 0;
//         int sumDiag2 = 0;
//         for(int j = 0; j<m;j++){
//             if(i==j) sumDiag1= sumDiag1+ arr[i][j];
//             if(i+j ==m) sumDiag2 = sumDiag2+arr[i][j];
//         }
//         printf("Sum of 1st diagonal is: %d and the sum of 2nd diagonal is: %d\n",sumDiag1, sumDiag2);
//     }
    

// }

// Interchange the first row with the last row

// int main(){
//     int m, n;
//     int arr1[m][n];
//     int arr2[m][n];

//     for(int i = 0; i<m; i++){
//         for(int j = 0; j<n;j++){
//             if(i==0 ||i==m) arr2[i][j] = arr1[j][i];
//             else a
            
//         }
//     }
// }

// sparse matrix
// a sparse matrix is a matrix which contains most of the elements as zero. The number of non zero elements is very less compared to zeroes
int main(){
    int m = 3;
    int n = 4;
    int arr[m][n];
    int arr1[3][4] = {1,0, 0 , 3, 0, 1, 0, 0, 0, 0, 0, 4};
    int zeroes = 0;
int nonZeroes = 0;
for(int i = 0; i<m; i++){
    for(int j = 0; j<n; j++){
        if (arr1[i][j] ==0) zeroes++;
        else nonZeroes++;
    }
}
int max = (m>n)? m : n;
if(nonZeroes<=max) printf("the matrix is a sparse matrix\n");
else printf("The matrix is not a sparse matrix\n");
}
