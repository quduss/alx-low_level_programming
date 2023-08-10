#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: min value of the array
 * @max: max value of the array
 * Return: pointer to the array
 */

int *array_range(int min, int max)
{
	int range;
	int *ptr;
	int j;
	int i;

	if (min > max)
		return (NULL);
	j = 0;
	range = 0;
	for (i = min; i <= max; i++)
		range++;
	ptr = malloc(range * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
		ptr[j++] = i;
	return (ptr);
}
