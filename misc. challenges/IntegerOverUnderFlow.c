#include <stdio.h>
#include <limits.h>

int main() 
{
   int sum, num1, num2;

   printf("Enter a number: ");
   scanf("%d",&num1);
   
   printf("Enter another number: ");
   scanf("%d",&num2);

   if ((num2 > 0) && (num1 > INT_MAX - num2)) {
	printf("INTEGER OVERFLOW!\n");
   }else if ((num2 < 0) && (num1 < INT_MIN - num2)){
    printf("INTEGER UNDERFLOW!\n");
   }else{
    sum = num1 + num2;
    printf("The sum of the two numbers is %d\n", sum);
   }
 
}