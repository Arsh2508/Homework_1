#include <stdio.h>

int main(){

	const int n = 5;
	char arr[n] = {};
	printf("Enter %d char array elements:\n", n);
	for(int i = 0; i < n; ++i){
		scanf(" %c", arr + i);

		arr[i] = arr[i] & (~32);
	}
	
	for(int i = 0; i < n; ++i){
		printf("%c ", arr[i]);
	}
	printf("\n");

	return 0;
}

