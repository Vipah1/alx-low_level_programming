#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point.
 * Description: Program description.
 * Result: 0 if success.
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n < 0)
{
printf("%d is negative\n", n);
}
else if (n == 0)
{
printf("%d is zero\n", n);
}
return (0);
}
