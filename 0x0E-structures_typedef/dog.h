#ifndef DOG_H
#define DOG_H
/**
 * struct dog - this is a dog's basic information.
 * @name: The dog's name or the first member of the struct.
 * @age: The dog's age or the second member of the struct.
 * @owner: The owner oof the dog or third member of the struct.
 */
struct dog
{
  char *name;
  float age;
  char *owner;
};
#endif
