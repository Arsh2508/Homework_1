#include <stdio.h>

int main(){
	int i = 0;
	printf("Printing with for loop \n");
	for(i = 0; i <= 10; ++i){
		printf("%d ", i);
	}printf("\n");

	for(i = 10; i >= 0; --i){
		printf("%d ", i);
	}
	
	printf("\n\nPrinting with while loop \n");
	
	i = 0;
	while(i <= 10){
		printf("%d ", i);
		++i;
	}printf("\n");

	i = 10;
	while(i >= 0){
		printf("%d ", i);
		--i;
	}
	printf("\n\n Printing with do while loop \n");

	i = 0;
	do{
		printf("%d ", i);
		++i;
	}while(i <= 10);
	printf("\n");
	
	i = 10;
	do{
		printf("%d ", i);
		--i;
	}while(i >= 0);

	printf("\n");

	return 0;

}
