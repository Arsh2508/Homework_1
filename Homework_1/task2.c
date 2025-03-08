#include <stdio.h>

int main(){
	
	char ch ='\0';

	do{
		printf("Enter the letter: ");
		scanf(" %c", &ch);
	}while (ch<65 || ch>122);

	// We need to convert 5th bit into 1 in any case
	// so we can use or operation with 32
	
	ch = ch | 32;

	printf("%c \n", ch);
	
	return 0;
}
