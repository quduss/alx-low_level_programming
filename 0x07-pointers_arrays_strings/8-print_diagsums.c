#include <stdio.h>
/**
 * print_diagsums - prints the sum of two diagonals of a square matrix
 * of integers
 * @a: pointer to first integer of matrix
 * @size: size of matrix
 */

void print_diagsums(int *a, int size)
{
	int sum;
	int sum2;
	int i;
	int j;

	sum = 0;
	sum2 = 0;
	for (i = 0; i < (size * size); i += (size + 1))
	{
		sum += a[i];
	}
	for (j = (size - 1); j < (size * size) - 1; j += (size - 1))
	{
		sum2 += a[j];
	}
	printf("%d, %d\n", sum, sum2);
}
