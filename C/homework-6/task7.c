#include <stdio.h>

int main(){

	const int n = 10;
	int arr[n] = {};
	
	printf("Enter %d elements of array:\n", n);
	for(int i = 0; i < n; ++i){
		scanf("%d", arr + i);
	}

	_Bool check = 1;		// bool for checking if the massive is sorted in descending order
	for(int i = 1; i < n; ++i){
		if(arr[i] > arr[i-1]){
			printf("No\n");
			check = 0;
			break;
		}
	}
	if(check){
		printf("Yes\n");
	}
	
	return 0;
}
