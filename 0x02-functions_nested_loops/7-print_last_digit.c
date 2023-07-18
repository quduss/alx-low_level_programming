#include "main.h"
/**
 * print_last_digit - prints the last digit of integer input
 * @a: integer input
 * Return: the last digit of integer input
 */

int print_last_digit(int a)
{
	long i;

	i = a;
	if (i < 0)
		i *= -1;
	_putchar((i % 10) + '0');
	return (i % 10);
}
