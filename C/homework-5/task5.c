#include <stdio.h>

int main(){

	const int n = 10;
	int arr[n];
	
	printf("Enter %d elements of array:", n);
	for(int i = 0; i < n; ++i){
		scanf("%d", arr+i);
	}

	int min = arr[0];
	int max = arr[0];
	for(int i = 1; i<n; ++i){
		if(arr[i] > max){
			max = arr[i];
		}
		else if(arr[i] < min){
			min = arr[i];
		}
	}
	
	printf("Min = %d, Max = %d \n", min , max);
	printf("The sum of minimum and maximum elements is %d \n", min+max);

}
