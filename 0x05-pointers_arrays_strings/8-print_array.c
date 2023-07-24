#include <stdio.h>
/**
 * print_array - prints n elements of an array of integers
 * @a: array of integers
 * @n: no of elements to print
 */

void print_array(int *a, int n)
{
	int i;

	if (n > 0)
	{
		i = 0;
		while (i < n)
		{
			printf("%d", a[i]);
			if (i != n - 1)
				printf(", ");
			else
				printf("\n");
			i++;
		}
	}
}
