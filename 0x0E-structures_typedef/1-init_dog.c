#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - This function intializes the type struct dog.
 * @d: Pointer to struct dog.
 * @name: Dog's name.
 * @age: The dog's age.
 * @owner: The dog's age.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
{
d = malloc(sizeof(struct dog));
}
p -> name = name;
p -> age = age;
d -> owner = owner;
}
