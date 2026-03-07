#include<stdio.h>
#include<math.h>
public class armStrong{
void armStrong(int n){
	int org = n;
	int len = 0;
	while(n>0){
		n = n/10;
		len++;
	}
	n = org;
	int num = 0;
	while(n>0){
		int temp = n%10;
		num = num + pow(temp, len);
		n/10;
	}
	if(num == org){
		printf("The number is armstrong");
	}
	else{
		printf("Not a armstrong");
	}
}
int main(){
	int n = 0;
	scanf("%d", &n);
	armStrong(n);
	return 0;
}}
