#include <stdio.h>
#include <unistd.h>
/**
 * main - prints the lowercase alphabet in reverse,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
int a;
for (a = 'z'; a >= 'a'; a--)
{
putchar (a);
}
putchhar ('\n');
return (0);
}
