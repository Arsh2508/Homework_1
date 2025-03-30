#include <stdio.h>

int main() {
        const int n = 10;
        int arr[n];

        printf("Enter %d array elements: ", n);

        for (int i = 0; i < n; ++i) {
                scanf("%d", &arr[i]);
        }

        int min = arr[0];
        int index = 0;
        for (int i = 1; i < n; ++i) {
                if (arr[i] < min) {
                        min = arr[i];
                        index = i;
                }
        }

        printf("The index of minimum value is %d\n", index);
        return 0;
}

