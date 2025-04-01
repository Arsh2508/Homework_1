#include <stdio.h>

int main(){
	const int n = 6;
	int arr[n] = {};

	printf("Enter %d array elements\n", n);
	for (int i = 0; i < n; ++i){
		scanf("%d", arr + i);
	} 
	
	for(int i = 1; i < n; ++i){
		arr[i] = arr[i]^arr[i-1];
		arr[i - 1] = arr[i]^arr[i-1];
		arr[i] = arr[i]^arr[i-1];
	}
	printf("Left rotation\n");
	for(int i = 0; i < n; ++i){
		printf("%d ", arr[i]);
	}
	printf("\n");

	printf("Input %d array elements for right rotation\n", n);
	for(int i = 0; i < n; ++i){
		scanf("%d", arr + i);
	}

	
	for(int i = n - 1; i > 0; --i){
		arr[i] = arr[i]^arr[i-1];
                arr[i - 1] = arr[i]^arr[i-1];
                arr[i] = arr[i]^arr[i-1];
	}
	printf("Right rotation\n");
        for(int i = 0; i < n; ++i){
               printf("%d ", arr[i]);
        }
        printf("\n");
	return 0;

}
