#include <stdio.h>

int main(){

	int value = 127;
	int *ptr = &value;
	
	printf("The address of variable is: %p\n", &value );	// it is not printing with %ls
	printf("The address of variable with pointer: %p\n", ptr);
	
	printf("The value of variable is: %d\n", *ptr);
	
	return 0;

}
