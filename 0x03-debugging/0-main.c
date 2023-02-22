#include "main.h"
/**
 * poositive_or_negative - Functions that prints * whether int is positive or negative.
 * Description: Prints positive or negative.
 * Return: int
 */
void positive_or_negative(int i)
{
int i;
i = rand() - RAND_MAX / 2;
if (i > 0)
{
printf("%d is positive\n", i);
}
else
{
printf("%d is negative\n", i);
}
return (0);
}
