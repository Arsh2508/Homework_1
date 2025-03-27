#include <stdio.h>

int main(){

	char a = '\0';
	
	char *ptr = &a;
	printf("The address before incrementing is: %p\n", ptr);
	printf("The address after incrementing in %p\n", ++ptr);

	return 0;		

}
