#include <stdlib.h>
/**
 * create_array - creates an array of chars and initializes with a char
 * input
 * @size: size of the array
 * @c: char input
 * Return: pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	s = malloc(sizeof(char) * size);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		s[i] = c;
	return (s);

}
