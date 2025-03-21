#include <stdio.h>

int main(){

	int num = 0;
	
	printf("Enter the number: ");
	scanf("%d", &num);

	if(num > 0){
		for(int i = 1; i <= num; ++i){
			if(num % i == 0)
			printf("%d ", i);
		}
	}
	else if(num < 0) {
		for(int i = num; i < 0; ++i){
			if (num % i == 0)
			printf("%d ", i);
		}		
	}
	else {
		printf("0 has no divider \n");
	}
	printf("\n");

}
