#include <stdio.h>

int main(){
	int n = 0;
	do{
		printf("Enter a positive number:");
		scanf("%d", &n);
	}while(n < 0);
	
	for(int i = 1; i <= n; ++i){
		for(int j = 0; j < i; ++j){
			printf("%d", i);
		}
		printf("\n");
	}
	return 0;
}
