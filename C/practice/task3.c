#include <stdio.h>

int main (){
	
	int n = 0;
	do{
		printf("Enter positeve n: ");
		scanf("%d", &n);
	}while (n < 0);
		
	if (n == 0 || n == 1){
		printf("%d \n", n);
	}
	else{
        int a = 0;
        int b = 1;
        int c = 0;
		for (int i = 1; i < n; ++i){
			c = b;	
			b = a + b;
			a = c;	
		}
		printf("%d \n", b);
	}
}
