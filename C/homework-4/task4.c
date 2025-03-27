#include <stdio.h>

int main(){

	int var1 = 1, var2 = 2, temp;
	int *ptr = &temp;

	printf("Values before swapping: %d, %d\n", var1, var2);

	*ptr = var1;
	var1 = var2;
	var2 = *ptr;
	printf("Values after swapping: %d, %d\n", var1, var2);
	
	return 0;

}
