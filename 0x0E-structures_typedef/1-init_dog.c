#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - sets a variable of the struct dog type to zero
 * @d: pointer to initialize struct dog
 * @name: initialize name
 * @age: initialize age
 * @owner: initialize owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
d = malloc(sizeof(struct dog));
d->name = name;
d->age = age;
d->owner = owner;
}
