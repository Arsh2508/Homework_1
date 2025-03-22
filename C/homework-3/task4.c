#include <stdio.h>

int main(){

	int n = 0;
	do{
		printf("Enter a positive number: ");
		scanf("%d", &n);
	}while(n < 0);	

	int k = 0;
	int i = 1;
	int l = k;
	while(i <= n){
		++l;
		k = l;
		while(k > 0){
			if(i > n) {break;}
			printf("%d ", i++);
			--k;
		}
		printf("\n");
	}

	printf("\n");
	return 0;
}
