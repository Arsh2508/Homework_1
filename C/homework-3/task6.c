#include <stdio.h>

int main(){
	int n = 0;
           do{
                   printf("Enter positeive number square's length: ");
                   scanf("%d", &n);
           }while(n < 0);
	
	printf("\n");
	for(int i = 0; i < n; ++i){
		if(i == 0 || i == n-1){
			for(int j = 0; j < n; ++j){
				printf("* ");
			}printf("\n");
		}
		else {
			for(int j = 0; j < n; ++j){  // using (condition) ?  : instead of if else
				printf("%c ", (j==0 || j==n-1) ? '*' : ' ');  
			}
			printf("\n");
		}		
	}	
	return 0;

}
