#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - frees previously allocated memory for dog
 * @d: pointer to dog to free
 */

void free_dog(dog_t *d)
{
	free(d);
}
