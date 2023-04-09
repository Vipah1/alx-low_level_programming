#include "main.h"
/**
 * get_bit - this function returns the value of a bit at an index in a decaml nuber.
 * @n: this is the number to search.
 * @index: this is the index of the bit.
 * Return: this is the value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
int bit_value;
if(index > 63)
{
return (-1);
}
bit_value = (n >> index) & 1;
return (bit_value);
}
