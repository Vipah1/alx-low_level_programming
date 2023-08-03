#include "main.h"
/**
 * flip_bits -this function counts the number of bits to change
 * @n: this is the first number to check
 * @m: seccond number
 * Return: Returns the number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int i, count = 0;
unsigned long int current;
unsigned long int exclusive = n ^ m;
for (i = 63; i >= 0; i--)
{
current = exclusive >> i;
if (current & 1)
count++;
}
return (count);
}
