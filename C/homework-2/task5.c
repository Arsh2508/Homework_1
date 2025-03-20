#include <stdio.h>

int main(){
	
	int n = 0;
	double res = 1;	

	do{	
		printf("Enter the n: ");
		scanf("%d", &n);
	}while (n < 0);
	
	for(int i = 1; i <= n; ++i){
		res *= i;
	}
	
	printf("The factorial of n is %.0lf \n", res);
	
	return 0;
	
}
