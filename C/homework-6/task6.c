#include <stdio.h>

int main(){
	
	const int n = 10;

	int arr[n] = {};
	printf("Enter %d elements of array: \n", n);
	for(int i = 0; i < n; ++i){
		scanf("%d", arr + i);
	}
	int target = 0;
	printf("Enter target: ");
	scanf("%d", &target);

	int t = -1;
	for(int i = 0; i < n; ++i){
		if(arr[i] == target){
			printf("The index of %d is %d\n",target, i);
			++t;
			break;
		}
	}

	if(t){
		printf("%d\n", t);
	}

	return 0;
}








