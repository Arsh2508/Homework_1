#include <stdio.h>

int main(){
	int num = 0;
	printf("Enter the number: ");
	scanf("%d", &num);

	int lucky = 1;	// like bool 
	int digit = 0;
	int test = num;

	if(num < 0){
		test = num * -1;
	}
	while(test){
		digit = test % 10;
		if(digit != 4 && digit != 7){
			lucky = 0; // if is not lucky then lucky=flase
			break;
		}	
		test /= 10;	
	}
	if (lucky){
		printf("%d is lucky number! \n", num);
	}else{
		printf("%d is not lucky number!\n", num);
	}

	return 0;
}
