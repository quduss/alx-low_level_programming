#include "main.h"
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
 * get_bit - gets the value of a bit at a given index
 * @n: unsigned long int input
 * @index: index of bit
 * Return: value of bit or -1 if error occurs
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > 63)
		return (-1);
	bit = _pow_recursion(2, index);
	if ((n & bit) >= 1)
		return (1);
	else
		return (0);
}
