#include "main.h"
int act_sqrt_recursion(int n, int i);
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
 return (act_sqrt_recursion(n, 0));
}
/**
 * act_sqrt_recursion - recurs the natural square root
 * @n: the number to be calculated.
 * @i: represents iterator.
 * Return: Returns the actual square root.
 */
int act_sqrt_recursion(int n, int i)
{
if (i * i > n)
{
return (-1);
}
if (i * i == n)
{
return (i);
}
return (act_sqrt_recursion(n, i + 1));
}
