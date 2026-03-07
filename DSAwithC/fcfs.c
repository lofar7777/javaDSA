// #include<stdio.h>
// int main(){
// 	int at[4], bt[4], wt[4], ct[4], sum = 0;
// 	for(int i = 0; i<4;i++){
// 		scanf("%d", &bt[i]);
// 	}
// 	for(int i = 0; i<4; i++){
// 		sum+=bt[i];
// 		ct[i] = sum;
// 		wt[i] = ct[i] - bt[i];
// 		printf("%d\t", bt[i]);
// 		printf("%d\t", wt[i]);
// 		}
// 	}


			

// int main() {
//     int bt[4], wt[4], ct[4], sum = 0;

//     printf("Enter burst time for 4 processes:\n");

//     // Input burst time
//     for(int i = 0; i < 4; i++){
//         scanf("%d", &bt[i]);
//     }

//     printf("\nBT\tCT\tWT\n");
// 	int awt = 0;

//     // Calculate CT and WT
//     for(int i = 0; i < 4; i++){
//         sum += bt[i];
//         ct[i] = sum;
//         wt[i] = ct[i] - bt[i];

//         printf("%d\t%d\t%d\n", bt[i], ct[i], wt[i]);
//     }

//     return 0;
// }


// // FCFS with arrival time 
// #include<stdio.h>
// int main(){
// 	int n, bt[20], wt[20], tat[20], temp[20], at[20];
// 	float awt = 0, atat=0;
// 	printf("Enter the no of process\n");
// 	scanf("%d", &n);
// 	printf("Enter the burst time of the process\n");
// 	for(int i = 0; i<n;i++){
// 		scanf("%d", &bt[i]);
// 	}
// 	printf("Enter the arrival time of the process\n");
// 	for(int i = 0;i<n;i++){
// 		scanf("%d", &at[i]);
// 	}
// 	temp[0] = 0;
// 	printf("Process\tArrival time\tBurst Time\tWaiting Time\tTAT\n");
// 	for(int i = 0;i<n;i++){
// 		if(temp[i]<at[i])
// 			temp[i] = at[i];
// 		wt[i] = 0;
// 		tat[i] = 0;
// 		temp[i+1] = temp[i]+bt[i];
// 		wt[i] = temp[i] -at[i];
// 		tat[i] = wt[i] + bt[i];
// 		awt = awt +wt[i];
// 		atat = atat + tat[i];

// 		printf("%d\t%d\t\t%d\t\t%d\t\t%d\n", i+1, at[i], bt[i], tat[i], wt[i]);
// 	}
// 	awt = awt/n;
// 	atat = atat /n;
// 	printf("Average waiting time is: %f\n", awt);
// 	printf("Average turn around time is: %f", atat);
// }


#include<stdio.h>
int main(){
	int n;
	printf("Enter the number of processes: ");
	scanf("%d", &n);
	int at[20], bt[20], ct[20], wt[20], tat[20], p[20];

	for(int i = 0; i<4; i++){
		printf("Enter the arrival time of process %d :", i+1);
		scanf("%d", &at[i]);
		printf("Enter the Burst time of process %d :", i+1);
		scanf("%d", &bt[i]);
		p[i] = i+1;
	}
	for(int i = 0; i<n-1;i++){
		for(int j = 0;j<n-i-1;j++){
			if(at[j]>at[j+1]){
				int temp1 = at[j];
				at[j] = at[j+1];
				at[j+1] = temp1;

				int temp2 = bt[j];
				bt[j] = bt[j+1];
				bt[j+1] = temp2;

				int temp3 = p[j];
				p[j] = p[j+1];
				p[j+1] = temp3;
			}
		}
	}

	int sum = 0;
	int temp = 0;
	for(int i = 0; i<n;i++){
		if(temp<at[i]) temp = at[i];
		ct[i] = sum+bt[i];
		sum = ct[i];
		wt[i] = ct[i] -bt[i];
		tat[i] = ct[i] -at[i];
	}
	printf("P\tAT\tBT\tCT\tWT\tTat\n");
	for(int i = 0;i<n;i++){
		printf("%d\t%d\t%d\t%d\t%d\t%d\n", p[i], at[i], bt[i], ct[i], wt[i], tat[i]);
	}
}
