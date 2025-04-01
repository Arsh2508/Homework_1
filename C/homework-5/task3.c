#include <stdio.h>

int main() {
	const int n = 10;
   	int arr[n];

    	printf("Enter %d array elements: ", n);

    	for (int i = 0; i < n; ++i) {
        	scanf("%d", arr + i);
    	}

	int index = 0;
    	for (int i = 1; i < n; ++i) {
        	if (arr[i] > arr[index]) {
			index = i;
       		}
    	}

    	printf("The index of maximum value is %d\n", index);
    	return 0;
}

