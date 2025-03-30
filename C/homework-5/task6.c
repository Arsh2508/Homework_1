#include <stdio.h>

int main(){

	const int rows = 4;
	const int cols = 5;
	int arr[rows][cols];

	int sum[rows];

	printf("Enter the elements of %dx%d matrix\n", rows, cols);	

	for(int i = 0; i < rows; ++i){
		sum[i] = 0;
		for(int j = 0; j < cols; ++j){
			scanf("%d", &arr[i][j]);
			sum[i] += arr[i][j];
		}
	}
	
	for(int i = 0; i < rows; ++i){
		printf("sum of elements in row %d is %d\n", i, sum[i]);
	}

	return 0;
}
