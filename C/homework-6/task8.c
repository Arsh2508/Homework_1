#include <stdio.h>

int main(){

	int arr[] = {1, 1, 2, 2, 3, 3, 4, 5, 5, 6, 6, 7, 7};
	const int n = sizeof(arr)/sizeof(arr[0]);

	int unique = 0;
	for(int i = 0; i < n; i += 2){
		if(arr[i] != arr[i + 1]){
			unique = arr[i];
			printf("The unique element is %d\n", unique);
			break;	
		}
	}

	return 0;
}
