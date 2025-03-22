#include <stdio.h>

int main(){
	int n = 0;
	do{	
		printf("Enter positeive number: ");
		scanf("%d", &n);
	}while(n < 0);

	printf("\n");
	for(int i = 0; i < n; ++i){
		for(int j = 0; j < n; ++j){
			printf("* ");
		}
		printf("\n");
	}
	
	return 0;

}
