#include <stdio.h>

int main() {
	
	int x = 0x89ABCDEF;
	int y = 0x76543210;

	int result = (y & ~0xff) | (x & 0xff);

	printf("The result 0x%X combined with 0x%X is: 0x%X\n",x,y,result);

	return 0;
}