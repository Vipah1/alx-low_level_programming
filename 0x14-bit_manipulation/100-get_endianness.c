#include "main.h"
/**
 * get_endianness -  this function checks if a machine is a little or big endian
 * Return: returns 0 for big and 1 for little
 */
int get_endianness(void)
{
unsigned int i = 1;
char *c = (char *) &i;
return (*c);
}
