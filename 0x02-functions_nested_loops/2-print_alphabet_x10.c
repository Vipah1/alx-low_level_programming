#include "main.h"
/**
 * print_alphabet_x10 - function to print 10x
 * Description: Prints alphabets 10 times
 * Return: void
 */
void print_alphabet_10x(void)
{
char ch;
int i = 0;
while (i < 10)
{
ch = 'a';
while (ch <= 'z')
{
_putchar(ch);
ch++;
}
_putchar('\n');
i++;
}
}
