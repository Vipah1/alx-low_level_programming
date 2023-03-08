#include "main.h"
/**
 * _pow_recursion - function returns value of x raised to the power y.
 * @x: this is the base number
 * @y: this is the power
 * Return: Retirn result of power.
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
if (y == 0)
{
return (1);
}
return (x * _pow_recursion(x, y - 1));
}
