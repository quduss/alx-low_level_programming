#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - creates new dog
 * @name: name to assign to the dog
 * @age: age to assign to the dog
 * @owner: owner to assign to the dog
 * Return: pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	char *name_copy;
	char *owner_copy;

	name_copy = name;
	owner_copy = owner;
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = name_copy;
	dog->age = age;
	dog->owner = owner_copy;
	return (dog);
}
