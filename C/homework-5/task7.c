#include <stdio.h>

int main(){
	
	const int n = 5;
	int arr[n][n];
	
	printf("Enter the elements of %dx%d matrix\n", n, n);
	for(int i = 0; i < n; ++i){
		for(int j = 0; j < n; ++j){
			scanf("%d", arr[i] + j);
		}
	}

	int sum = 0;
	for(int i = 0; i < n; ++i){
		sum += arr[i][i];
	}
	printf("The sum is %d\n", sum);
	return 0;
}
