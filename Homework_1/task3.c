#include <stdio.h>

int main(){
	
	char ch ='0';
	
	do{
		printf("enter your character: ");
		scanf(" %c", &ch);
		}
	while(ch>122 || ch<65);



	// A - 65 - 01000001 
	// a - 97 - 01100001
	//
	// the difference is 32 which is 2^5` (0100000)
	//

	ch = ch^32;

	// if the character is uppercase it will be lowercase and vice versa
	
	
	printf("%c \n", ch);

	return 0;
}
