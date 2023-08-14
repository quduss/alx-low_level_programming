#ifndef DOG_H
#define DOG_H
/**
 * struct dog - type to describe the features of a typical dog
 * @name: name of dog
 * @age: age of a dog
 * @owner: owner of the dog
 */

/**
 * dog_t - Typedef for struct dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
