#include <stdio.h>

int main(){
	
	int seconds = 0;

	do {
		printf("Enter value of seconds: ");
		scanf(" %d", &seconds);
	}while(seconds < 0);

	int hours = seconds / 3600;

	int rest_seconds = seconds - hours*3600;

	int minutes = rest_seconds / 60;

	rest_seconds -= minutes*60;

	printf(" %d seconds = %d hours, %d minutes, %d seconds \n", seconds, hours, minutes, rest_seconds);

	return 0;


}
