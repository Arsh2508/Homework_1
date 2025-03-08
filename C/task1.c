#include <stdio.h>

int main(){
	
	char ch = '\0';
	
	do{
		printf("Enter an lowercase letter: ");
		scanf(" %c", &ch);
	}while (ch<65 || ch>122);


	// Lowercase letter a - 01100001
	// Uppercase letter A - 01000001
	//
	// the difference is 32 or 100000
	//
	// we need to convert the 5th bit to 0
	// so we can use & operator with the number which 5th bit is 0
	// that number is 1011111 - 95
	// 
	//

	ch = ch & 95;

	printf(" %c \n", ch );

	return 0;
}
