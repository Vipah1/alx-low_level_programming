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
int i = 0;
int s = 0;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
while (s1[i] != '\0')
{
i++;
}
while (s2[s] != '\0')
{
s++;
}
concat = (char *) malloc((i + s +1) *sizeof(char));
if (concat == NULL)
{
return (NULL);
}
for (i = 0; s1[i] != '\0'; i++)
{
concat[i] = s1[i];
}
for (s = 0; s2[s] != '\0'; s++)
{
concat[i] = '\0';
concat[i] = s2[s];
i++;
}
return (concat);
}
