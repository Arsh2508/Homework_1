#include <stdio.h>

int main(){

	const int n = 10;
	int arr[n] = {};
	
	printf("Enter %d elements of array:\n", n);
	for(int i = 0; i < n; ++i){
		scanf("%d", arr + i);
	}
	
	int index = -1;			//then incrementing to 0 
	for(int i = 0; i < n; ++i){
		if((arr[i] & 1) == 0){
			++index; 	
			if(i != index){
				arr[i] = arr[i] ^ arr[index];
				arr[index] = arr[i] ^ arr[index];
				arr[i] = arr[i] ^ arr[index];			
			}	
		}
	}
	printf("The sorted array is:\n");
	for(int i = 0; i < n; ++i){
		printf("%d ", arr[i]);
	}
	printf("\n");
	
	return 0;
}
