#include <stdio.h>

int main(){

	int arr[] = {3, 10, 6, 1, 8, 4, 2, 5, 7};  // N=10, 9 is missing
	const int n = sizeof(arr)/sizeof(arr[0]);

	int sum1 = 0, sum2 = 0;
	for(int i = 0; i < n; ++i){
		sum1 += (i + 1);
		sum2 += arr[i];
	}
	sum1 += (n + 1);
	printf("The missing number is %d\n", sum1-sum2);

	return 0;
}
