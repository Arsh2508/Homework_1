#include <stdio.h>

int main(){
	
	int num = 0;

	printf("Enter the number: ");
	scanf("%d", &num);

	int res = 0;
	int test = num;
	int digit = 0;
	
	int count = 0;
	while(test){
		test /= 10;
		count++;
	}
	test = num;
	int power = 0;
	while(test){
		power = 1;
		digit = test % 10;
		for(int i = 0; i < count; ++i){	
			power *= digit;
		}
		res += power;
		test /= 10;
	}
	
	if(res == num){
		printf("%d is Armstrong number \n", num);
	}
	else{
		printf("%d is not Armstrong number \n", num);
	}
		
	return 0;
}
