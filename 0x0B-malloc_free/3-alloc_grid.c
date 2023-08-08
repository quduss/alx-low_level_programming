#include <stdlib.h>
/**
 * alloc_grid - creates a 2d array and initializes to 0
 * @width: width of 2d array
 * @height: height of 2d array
 * Return: pointer to the 2d array created
 */

int **alloc_grid(int width, int height)
{
	int **two_dim;
	int i;
	int j;
	int k;

	if (width <= 0 || height <= 0)
		return (NULL);
	two_dim = malloc(sizeof(int *) * height);
	if (two_dim == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		two_dim[i] = malloc(sizeof(int) * width);
		if (two_dim[i] == NULL)
		{
			while (i > 0)
			{
				free(two_dim[--i]);
			}
			return (NULL);
		}
	}
	for (j = 0; j < height; j++)
		for (k = 0; k < width; k++)
			two_dim[j][k] = 0;
	return (two_dim);
}
