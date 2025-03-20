#include <stdio.h>
#include <math.h>

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
	
	int n = pow(10, count-1);

	for(int i = 0; i < count; ++i){
		int res = (num / n) % 10;
		printf("%d, ", res);
		n/=10;
	}printf("\n");
	return 0;
	
}
