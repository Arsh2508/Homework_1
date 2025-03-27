#include <stdio.h>

int main(){
	
	int *ptr = NULL;
	
	if(ptr == NULL){
		printf("The pointer is null: \n");
	}
	
	int num = 8;
	
	ptr = &num;
	printf("The value of *ptr is %d\n", *ptr);

	return 0;
}


