#include <stdio.h>

int main(){

	const int n = 5;
	char arr[n] = {};
	
	printf("enter %d char elements of array\n", n);
	for(int i = 0; i < n; ++i){
		scanf(" %c", arr + i);
	}

	for(int i = 0; i < n/2; ++i){
                arr[i] = arr[i] ^ arr[n-1-i];
		arr[n-1-i] = arr[i] ^ arr[n-1-i];
		arr[i] = arr[i]^arr[n-1-i];               
        }
	printf("The reversed array elements are:\n");
	for(int i = 0; i < n; ++i){
		printf("%c ", arr[i]);
	}
	printf("\n");

	return 0;
}
