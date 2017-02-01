#include <stdio.h>

void main() {

	int x = 0, temp;

while ((x != 1) || (x != 2)) {
	printf("Press 1 to convert Fahrenheit to Celcius, or \n");
	printf("Press 2 to convert Celcius to Fahrenheit:");
	scanf("%d",&x);
		if((x != 1) || (x != 2)){
			printf("Invalid. Please enter a 1 or 2. \n");
		}
  } 
	
	printf("Please enter the temperature:");
	scanf("%d",&temp);

}