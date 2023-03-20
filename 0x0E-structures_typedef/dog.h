#ifndef DOG_H
#define DOG_H
/**
 * struct dog - this is a dog's basic information.
 * @name: The dog's name or the first member of the struct.
 * @age: The dog's age or the second member of the struct.
 * @owner: The owner oof the dog or third member of the struct.
 * Dscription: This function contains the object definition of a dog.
 */
struct dog
{
char *name;
float age;
char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
char *_strcpy(char *dest, char *src);
void free_dog(dog_t *d);
int _strlen(char *s);
#endif
