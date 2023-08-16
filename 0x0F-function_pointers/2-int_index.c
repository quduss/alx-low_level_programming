#include <stdlib.h>
/**
 * int_index - searches for an integer
 * @array: array input
 * @size: size of the array
 * @cmp: pointer to compare function
 * Return: index of the match 0r -1 if it fails
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	if (size <= 0)
		return (-1);
	if (array != NULL && cmp != NULL)
	{
		int i;

		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
		return (-1);
	}
	return (-1);
}
