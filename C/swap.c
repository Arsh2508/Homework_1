#include <stdio.h>

int main(){
	
	char a = 'a';
	char b = 'b';

	printf("%c %c \n", a, b);

	int c = a;
	a = b; 
	b = c;

	printf("%c %c \n", a, b);

	return 0;

}
