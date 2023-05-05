#include "main.h"
/**
 * get_bit - function to get the value of a bit index in a decimal.
 * @n: this is the number to search.
 * @index: this is the index of the bit.
 * Return: this is the value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
int bit_value;
if (index > 63)
{
return (-1);
}
bit_value = (n >> index) & 1;
return (bit_value);
}
