#include <stdio.h>

int main(){
	
	for (int i = 1; i < 100; i += 2){
		printf("%d ", i);
	
		if(i % 11 == 0){
			printf("\n");
		}
	
	} printf("\n");

	return 0;
}
