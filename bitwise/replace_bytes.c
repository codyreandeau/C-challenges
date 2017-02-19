
//Cody Reandeau

#include <stdio.h>
#include <stdlib.h>
/* HW 2.60 exchange a byte of x with b */
unsigned replace_bytes(unsigned x, int i, unsigned char b);

void main()
{
   unsigned x=0;
   unsigned y=0, result;
   int z=9;
   printf("Enter x (4 bytes value) in hex: 0x");
   scanf("%x", &x);
   printf("Which byte (0-3) should be replaced i = ");
   scanf("%d", &z);
   printf("Enter b (a bytes value) in hex: 0x");
   scanf("%x", &y);

   printf("\nYou enterd:\tx = 0X%X\n\t\ti = %d\n\t\tb = 0X%X\n", x, z, y);
   result = replace_bytes(x, z, y);
   
   printf("\nPlace 0x%X in byte %d of 0x%X gives: 0x%X\n\n", y, z, x, result);
}

unsigned replace_bytes(unsigned x, int i, unsigned char b) 
{
   return (x & ~(0xFF << (i * 8))) | (b << (i * 8));
}
