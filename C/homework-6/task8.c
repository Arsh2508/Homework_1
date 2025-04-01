#include <stdio.h>

int main(){

	int arr[] = {1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 6, 7, 7, 8};
	const int n = sizeof(arr)/sizeof(arr[0]);

	int unique = 0;
	_Bool last = 1;
	for(int i = 0; i < n - 2; i += 2){
		if(arr[i] != arr[i + 1]){
			unique = arr[i + 1];
			printf("The unique element is %d\n", unique);
			last = 0;
			break;	
		}
	}

	if(last){
		unique = arr[n - 1];
		printf("The unique element is %d\n", unique);
	}

	return 0;
}
