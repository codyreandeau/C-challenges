#include "stdafx.h"

int main()
{
	double ticket = 7.50;
	double totalAmount, adultsTotal, kidsTotal, 
		seniorsTotal, totalPlusTax, discount = 0, totaldiscountAmount = 0;
	int adults, kids, seniors, totalPeople;
	
	//get number of adult tickets
	do {
		printf("How many adults (14 or older): ");
		scanf_s("%d", &adults);
		if (adults < 0) {
			printf("\nThe number of tickets cannot be less than zero.\n\n");
		} 
	} while (adults < 0);

	//get number of kid tickets
	do{
		printf("How many kids (under 14): ");
		scanf_s("%d", &kids);
		if (kids < 0) {
			printf("\nThe number of tickets cannot be less than zero.\n\n");
		}
	} while (kids < 0);

	//get number of senior tickets
	do {
		printf("How many seniors (over 65): ");
		scanf_s("%d", &seniors);
		if (seniors < 0) {
			printf("\nThe number of tickets cannot be less than zero.\n\n");
		}
	} while (seniors < 0);
	
	//calculate prices for adults, kids and seniors
	adultsTotal = ticket * adults;
	kidsTotal = (ticket * .75) * kids;
	seniorsTotal = (ticket * .5) * seniors;

	//Total amount of people
	totalPeople = adults + kids + seniors;

	//Total Amount without discount
	totalAmount = adultsTotal + kidsTotal + seniorsTotal;

	//Calculate discount (if any)
	if (totalPeople >= 10 && totalAmount < 20) {
		totaldiscountAmount = totalAmount * .9;
		discount = totalAmount * .1;
	}
	else if (totalPeople >= 20 && totalAmount < 30) {
		totaldiscountAmount = totalAmount * .8;
		discount = totalAmount * .2;
	}
	else if (totalAmount >= 30) {
		totaldiscountAmount = totalAmount * .7;
		discount = totalAmount * .3;
	}
	else {
		totaldiscountAmount = totalAmount;
	}

	//total plus taxes
	totalPlusTax = totaldiscountAmount + (totalAmount * .10);

	//Print values
	printf("\nTotal price of adult tickets: $%.2lf\n", adultsTotal);
	printf("Total price of kids tickets: $%.2lf\n", kidsTotal);
	printf("Total price of senior tickets: $%.2lf\n", seniorsTotal);
	printf("Grand total price: $%.2lf\n", totalAmount);
	printf("Group discount money value: $%.2lf\n", discount);
	printf("Total price after discount: $%.2lf\n", totaldiscountAmount);
	printf("The tax: $%.2lf\n", (totalAmount * .10));
	printf("Total price including tax: $%.2lf\n", totalPlusTax);

    return 0;
}