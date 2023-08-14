#include "dog.h"
/**
 * init_dog - initialize a variable of type struct dog
 * @d: pointer to the variable
 * @name: name of dog to initialize with
 * @age: age of dog to initialize with
 * @owner: owner to initialize with
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
