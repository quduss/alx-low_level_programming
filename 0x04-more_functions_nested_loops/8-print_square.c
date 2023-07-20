#include "main.h"
/**
 * print_square - prints a square using hashes to stdout
 * @size: size of the square
 * Return: void
 */

void print_square(int size)
{
	if (size > 0)
	{
		int a;
		int b;

		a = 0;
		while (a < size)
		{
			b = 0;
			while (b < size)
			{
				_putchar('#');
				b++;
			}
		_putchar('\n');
		a++;
		}
	}
	else
		_putchar('\n');
}
