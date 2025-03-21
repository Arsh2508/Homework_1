#include <stdio.h>

int main(){

	int a = 0;
	int b = 0;	
	printf("Enter a: ");
	scanf("%d", &a);
	do{
		printf("Enter positive b: ");
		scanf("%d", &b);
	}while (b < 0);

	int res = 1;
	for (int i = 0; i < b; i++){
		res *= a;		
	}
	printf("a to b power is %d\n", res);
	return 0;
}
