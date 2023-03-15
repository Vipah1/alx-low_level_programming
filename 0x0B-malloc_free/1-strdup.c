#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - This function duplicates to a new memory location.
 * @str: this is char
 * Return: 0 on success
 */
char *_strdup(char *str)
{
char *strcpy;
int len = 0;
int count = 0;
if (str == NULL)
{
return (NULL);
}
while (str[len] != '\0')
{
len++;
}
strcpy = malloc((len * sizeof(char)) + 1);
while (str[count] != '\0')
{
count++;
}
return (strcpy);
}
