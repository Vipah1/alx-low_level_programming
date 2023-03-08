#include "main.h"
/**
 * factorial - this function returns factorial of annumber.
 * @n: number whose factorial is returned.
 * Return: Factorial
 */
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
if (n == 0)
{
return (1);
}
return (n *factorial(n -1));
}
