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
  char *dd;
  int i,r;
  if (str == NULL)
    {
      return (NULL);
    }
  i = 0;
  while (str[1] != '\0')
    {
      i++;
    }
  dd = malloc(sizeof(char) * (i + 1));
  if (dd == NULL)
    {
      return (NULL);
    }
  for (r = 0; str[i]; r++)
    {
      dd[r] = str[i];
    }
  return (dd);
}
