#include <stdlib.h>
/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: number of elements in array
 * @size: size of each elements in bytes
 * Return: pointer to the memory allocated
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	char *a;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	a = ptr;
	for (i = 0; i < (nmemb * size) / sizeof(char); i++)
		a[i] = 0;
	return (ptr);
}
