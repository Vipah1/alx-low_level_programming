#include <stdlib.h>
#include "main.h"
/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 * Return: pointer to the resulting string	
 */
		
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *size;
unsigned int i = 0;
unsigned int j = 0;
unsigned int length1 = 0;
unsigned int length2 = 0;
while(s1 && s1[length1])
{
length1++;
}
while(s2 && s1[lenght2])
{
length2++;
}
if (n < length2)
{
size = malloc(sizeof(char) * (length1 + n + 1)); 
}
else
{
size = malloc(sizeof(char) * (length1 + length2 + 1));
}
if(!size)
{
return (NULL);
}
while (i < length1)
{
size[i] = s1[i];
i++;
}
while (n < length2 && i < (length1 + length2))
{
size[i++] = s2[i++];
}
size[i] = '\0';
return(size);
}
