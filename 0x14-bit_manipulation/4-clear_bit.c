#include "main.h"
/**

 * clear_bit - this funciton sets the value of a given bit to 0
 * @n: this is a pointer to the number to be changed
 * @index: this is the index of the bit to clear
 * Return: Returns 1 if success and -1 if fail
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
{
return (-1);
}
*n = (~(1UL << index) & *n);
return (1);
}
