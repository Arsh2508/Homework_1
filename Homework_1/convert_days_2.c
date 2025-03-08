#include <stdio.h>

int main(){
	
	int days = 0;
	
	do {
		printf("Enter the value of days: ");
		scanf(" %d", &days);
	}while (days < 0);

	int years = days / 365;
	int rest_days = days - years * 365;

	int months = rest_days / 30;

	rest_days -= months*30;

	printf("%d days = %d years, %d months, %d days \n", days, years, months, rest_days);

	return 0;
}
