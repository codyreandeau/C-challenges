#include <stdio.h>
#define TRUE 1
#define FALSE 0

void main() {

while (TRUE) {

	int x=0, temp=0, conversion=0;

	while ((x != 1 && x != 2 && x !=3)) {
		printf("Press 1 to convert Fahrenheit to Celcius, or \n"
		"Press 2 to convert Celcius to Fahrenheit, or \n"
	    "Press 3 to exit the program: ");
		scanf("%d",&x);
		    if(x == 3){
				printf("\nGoodbye!\n\n");
				exit(0);
			}else if((x != 1 && x != 2)){
				printf("\nINVALID. Please enter a 1 or 2.\n\n");
			}
  		} 
	
		printf("\nPlease enter the temperature: ");
		scanf("%d",&temp);

		if(x == 1){
			while(temp < -58 || temp > 122){
				printf("\nSorry, that temperature is invalid.\n\n"
				"Please enter the temperature: ");
				scanf("%d",&temp);
			}
			conversion = 5 * (temp - 32) / 9;
			printf("\nThe temperature in Celcius is %d\xf8\C\n\n", conversion);
		}else{
			while(temp < -50 || temp > 50){
				printf("\nSorry, that temperature is invalid.\n\n"
				"Please enter the temperature: ");
				scanf("%d",&temp);
			}
			conversion = (1.8 * temp) + 32;
			printf("\nThe temperature in Fahrenheit is %d\xf8\F\n\n", conversion);
		}

	}
}