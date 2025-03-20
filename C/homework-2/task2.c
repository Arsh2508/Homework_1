#include <stdio.h>

int main(){
	
	int a = 0;
	int b = 0;
	
	do{
		printf("Enter a and b: ");
		scanf("%d %d", &a, &b);
	}while (a >= b);
	
	for(int i = a; i < b; ++i){
		if (i % 5 == 0){
			printf("%d ", i);
		}
	}
	
	printf("\n");

	return 0;	

}
