#include "main.h"
/**
 * set_bit - function tat sets a bit at a given index
 * @n: this is a pointer to the number to be changed
 * @index: this is the inde of the bit to set
 * Return: return 1 id suces and -1 if fail
 */
int set_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
{
return (-1);
}
*n = ((1UL << index) | *n);
return (1);
}
