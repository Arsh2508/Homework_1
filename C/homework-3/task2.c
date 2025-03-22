#include <stdio.h>

int main(){
	
	int num = 0;
	do{
		printf("Enter the positeve num: ");
		scanf("%d", &num);
	}while (num <= 0);		// perfect numbers are only positive
	
	int res = 0;
	for(int i = 1; i<num; ++i){
		if (num % i == 0){
			res += i;
		}
	}
	if(res == num){
		printf("The %d is perfect number \n", res);
	}else{
		printf("The %d is not perfect nubmer\nThe sum of its divisors is %d\n", num ,res);
	}
	return 0;

}
