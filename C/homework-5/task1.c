#include <stdio.h>
#define size 10

int main(){

	int arr[size];

	printf("Enter %d array elements: ", size);

	for(int i = 0; i < size; ++i){
		scanf("%d", arr+i);
	}

	int max = arr[0];
	for(int i = 1; i < size; ++i){
		if(arr[i] > max){
			max = arr[i];
		}
	}
		
	printf("The maximum value is %d\n", max);
	return 0;
}
