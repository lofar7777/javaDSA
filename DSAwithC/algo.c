#include<stdio.h>
int main(){
  int ar[4], bt[4], wt[4], ct[4], sum = 0;
  for(int i = 0; i<4; i++){
    scanf("%d", &bt[i]);
  }
  for(int i = 0; i<4; i++){
    sum+=bt[i];
    ct[i] = sum;
    wt[i] = ct[i] - bt[i];
    printf("%d\t", bt[i]);
    printf("%d\t", wt[i]);
  }
}
