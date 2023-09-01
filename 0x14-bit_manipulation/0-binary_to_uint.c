#include "main.h"
#include <stdlib.h>

/**
  * _pow_recursion - raise the power of x to y
  * @x: x input
  * @y: y input
  * Return: x to the power y
  */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, (y - 1)));
}

/**
 * binary_to_uint - converts a binary number in string format to
 * an unsigned int
 * @b: pointer to string that contains binary number
 * Return: the converted number or 0
 */

unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	int c;
	unsigned int sum = 0;

	if (b == NULL)
		return (0);
	while (b[i] != '\0')
	{
		if (!(b[i] == '0' || b[i] == '1'))
			return (0);
		i++;
	}
	if (i == 0)
		return (0);
	for (c = 0; c < i; c++)
	{
		sum += (b[c] - 48) * _pow_recursion(2, i - 1 - c);
	}
	return (sum);
}
