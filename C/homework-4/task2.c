#include <stdio.h>

int main(){

	int num1 = 0, num2 = 0;
	printf("Enter the value of variable: ");
	scanf("%d", &num1);
	num2 = num1;
	
	int *ptr = &num1;
	
	*ptr *= 2;
	printf("The value of variable before change: %d\n", num2);
	printf("The value of variable after change: %d\n", *ptr);
	return 0;

}
