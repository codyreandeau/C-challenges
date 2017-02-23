#include <stdio.h>

int main() {

	int a = 1;
	int b = 0;
	int c = 0xFF;
	int d = 0xFF;

	if(a & (~0)){
		printf("\nA passed\n");
	}
		
	if(~b & (~0)){
		printf("B passed\n");
	}
		
	if (c & 0xFF){
		printf("C passed\n");
	}	
		
	if(d << ((sizeof(int) << 3) - 8)){
		printf("D passed\n\n");
	}
	
    return 0;
}