#ifndef DOG_H
#define DOG_H
/**
 * struct dog - type to describe the features of a typical dog
 * @name: name of dog
 * @age: age of a dog
 * @owner: owner of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
