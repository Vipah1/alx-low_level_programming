#include "main.h"
/**
 * _puts_recursion - This function is like puts();
 * @s: this is the input
 * Return: ALways return 0 when success
 */
void _puts_recursion(char *s)
{
if (*s)
{
_putchar(*s);
_puts_recursion(s + 1);
}
else
_putchar("\n");
}
