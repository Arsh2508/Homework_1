#include <stdio.h>

int main(){

	const int n = 10;
	int arr[n] = {};
	int count = 0;

	printf("Enter %d elements of array\n", n);
	for(int i = 0; i < n; ++i){
		scanf("%d", arr + i);
		if(arr[i] & 1){
			++count;
		}
	}
	printf("Count of odd numbers is %d\n", count);
	return 0;
}
