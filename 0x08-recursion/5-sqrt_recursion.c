#include "main.h"
/**
 * _sqrt_recursion - returns the square root of a number.
 * @n: the number to be square rooted.
 * Return: the resulting square root
 */
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
return (_sqrt_recursion(n));
}
