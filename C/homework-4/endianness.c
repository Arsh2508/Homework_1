#include <stdio.h>

int main(){
	
	int x = 260;	// 00000000 00000000 00000001 00000100
	
	char *ptr =(char*)&x;
		
	if (*ptr == 0){		// the most significant byte is 0 
		printf("This platform is big-endian: \n");
	}
	else{			// the less siginficant byte is 4
		printf("This platform is little-endian: \n");
	}
	
	return 0;

}
