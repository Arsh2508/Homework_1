#include <stdio.h>

int main(){
	int n = 0;
        do{
		printf("Enter positeive number for triangle high: ");
                scanf("%d", &n);
          }while(n <= 0);
	
	int l = (n-1) * 2;

	for(int i = 0; i < n; ++i){
		for(int j = 0; j <= l; ++j){
			if(i == n - 1 && j % 2 == 0){
				printf("*");
			}else if(j == l/2 - i || j == l/2 + i){
				printf("*");
			}
			else{
				printf(" ");
			}
		}	
		printf("\n");	
	}

	
	

/*

    *
   * *
  *   *
 *     *
* * * * *

*/
        return 0;

}
      
