#include <stdio.h>

int main(){

	const int n = 5;
	int arr1[n] = {};
	int arr2[n] = {};

	printf("Enter the elements of arr1\n");
	for(int i = 0; i < n; ++i){
		scanf("%d", arr1 + i);
	}
	printf("Enter the elements of arr2\n");
	for(int i = 0; i < n; ++i){
		scanf("%d", arr2 + i);
	}
	
	_Bool a = 1;
	for(int i = 0; i < n; ++i){
		if(arr1[i] != arr2[i]){
			a = 0;
			break;	
		}
	}
	
	if(a){
		printf("The arrays are equal:\n");
	}else{
		printf("The arrays are not equal:\n");
	}
	return 0;
}
