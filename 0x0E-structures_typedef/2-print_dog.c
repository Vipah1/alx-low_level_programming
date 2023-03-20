#include "dog.h"
#include <stdlib.h>
/**
 * print_dog - Function to print dog's info.
 * @d: Pointer with all info from struct.
 */
void print_dog(struct dog *d)
{
if (d == NULL)
{
return;
}
if (d->name == NULL)
{
d->name = "(nil)";
}
if (d->age == NULL)
{
d->age = "(nil)";
}
if (d->owner == NULL)
{
d->owner = "(nil)";
}
printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
