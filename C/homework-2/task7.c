#include <stdio.h>

int power(int a, int b){
	int res = 1;
	for(int i = 0; i < b; ++i){
		res *= a;
	}
	return res;
}

int main(){
	
	long num = 0;

	printf("Enter the number: ");
	scanf("%ld", &num);
	
	long test = num;
	int count = 0;	
	while(test > 0){
		count++;
		test /= 10;
	}
	
	long n = power(10, count-1);

	for(int i = 0; i < count; ++i){
		long res = (num / n) % 10;
		if (i == count-1){
			printf("%ld", res);
		}else{
			printf("%ld, ", res);
			n /= 10;
		}
	}printf("\n");

	return 0;	
}
