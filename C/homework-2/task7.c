#include <stdio.h>

int power(int a, int b){
	int res = 1;
	for(int i = 0; i < b; ++i){
		res *= a;
	}
	return res;
}

int main(){
	
	int num = 0;

	printf("Enter the number: ");
	scanf("%d", &num);
	
	int test = num;
	int count = 0;	
	while(test > 0){
		count++;
		test /= 10;
	}
	
	int n = power(10, count-1);

	for(int i = 0; i < count; ++i){
		int res = (num / n) % 10;
		if (i == count-1){
			printf("%d", res);
		}else{
			printf("%d, ", res);
			n/=10;
		}
	}printf("\n");
	return 0;
	
}
