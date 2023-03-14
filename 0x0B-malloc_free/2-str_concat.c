#include "main.h"
#include <stdlib.h>
/**
 * str_concat - adds together for size the ends of an input
 * @s1: first input
 * @s2: second input
 * Return: Concantination of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
char *concat;
int i, s;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
i = s = 0;
}
while (s1[i] != '\0')
{
i++;
}
while (s2[s] != '\0')
{
s++;
}
concat = malloc(sizeof(char) * (i + s + 1));
if (concat == NULL)
{
return (NULL);
}
i = s = 0;
while (s1[i] != '\0')
{
concat[i] = s1[i];
i++;
}
while (s2[s] != '\0')
{
concat[i] = s2[s];
i++, s++;
}
concat[i] = '\0';
return (concat);
}
