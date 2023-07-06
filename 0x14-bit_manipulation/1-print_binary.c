#include "main.h"
/**
 * print_binary - This is a function that prints the binary equivalent of a decimal number
 * @n: This is the argument to be printed in binary
 */
void print_binary(unsigned long int n)
{
  int i, count = 0;
  unsigned long int current;
  for (i = 63; i >= 0; i--)
    {
      current = n >> i;
      if (current & 1)
	{
	  _putchat('1');
	  count++;
	}
      else if (count)
	_putchar('0');
    }
  if (!count)
    _putchar('0');
}
