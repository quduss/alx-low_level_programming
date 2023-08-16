#include <stdlib.h>
/**
 * array_iterator - executes a function on each element of an array of ints
 * @array - array of integers
 * @size: size of the array
 * @action: pointer to the function to execute
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (action != NULL)
	{
		size_t i;

		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
