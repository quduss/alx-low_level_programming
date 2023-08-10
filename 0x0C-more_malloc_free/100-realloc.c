#include <stdlib.h>
#include <string.h>
/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to memory previously allocated with call to malloc
 * @old_size - size of ptr
 * @new_size - size of new memory
 * Return: pointer to new allocated memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *s;

	if (ptr == NULL)
	{
		s = malloc(new_size);
		if (s == NULL)
			return (NULL);
		return (s);
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);
	s = malloc(new_size);
	if (s == NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size > old_size)
		memcpy(s, ptr, old_size);
	if (old_size > new_size)
		memcpy(s, ptr, new_size);
	free(ptr);
	return (s);
}
