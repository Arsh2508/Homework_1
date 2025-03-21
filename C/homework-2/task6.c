#include <stdio.h>
#include <math.h>

int main(){
	int num = 0;		
	
	printf("Enter a number: ");
	scanf("%d", &num);		// input the number

	int a = 0;	// for negative numbers 
	if (num < 0){	
		num *= -1;
		a = 1;	// if num is negative convert to positive and then to negative
	}
	int count = 0;			
	int test = num;			
	while (test > 0){		// counting the number of digits
		test /= 10;
		count++;
	}
	
	int rev_num = 0;		// reversed number
	int c = pow(10, count-1);	// c is needed for counting rev_num
	int n = 0;

	for(int i = 0; i < count; i++){
		n = pow(10, i);				//n starts from 1
		rev_num += ((num / n) % 10) * (c / n);	// formula that I found
	}	
	if (a){
		rev_num *= -1;
	}

	printf("The reverse is: %d\n", rev_num);
	
	return 0;
}
