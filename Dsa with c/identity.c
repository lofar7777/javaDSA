#include<stdio.h>
int main(){
int col1 = 0;
int col0 = 0;

int m = 4;
int arr[4][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9,10,11,12,13,14,15,16};
int arr1[4][4] = {1, 0, 0, 0, 0, 1, 0, 0, 0,0, 1, 0, 0, 0, 0, 1};




for(int i = 0; i<m;i++){
    for(int j = 0; j<m; j++){
        if(i==j){
            if(arr1[i][j] ==1) col1++;
        }
        else{
            if(arr1[i][j]==0) col0++;
        }
    }
}
if(col1==m && col0==m*m-m) printf("matrix is identity");
else printf("matrix is not identity");
return 0;
}


// 3x3 matrix has 3 col1 and 6 col0
// 4x4 matrix will have 4 col1 and 