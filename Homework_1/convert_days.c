#include <stdio.h>

int main(){
	
	int days = 0;

	do{
		printf("Enter the value of days: ");
		scanf("%d", &days);
	}while(days < 0);

	int year = days / 365;
	// our type is int 
	
	int rest_days = days - year*365;
	// counting the rest days 

	int week = rest_days / 7;

	rest_days -= week*7;

	printf("%d days = %d years, %d weeks, %d days, \n",days, year, week, rest_days);
	

	return 0;
}
