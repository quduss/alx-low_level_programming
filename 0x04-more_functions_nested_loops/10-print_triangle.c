#include "main.h"
/**
 * print_triangle - prints a triangle to the stdout
 * @size: size of the triangle
 * Return: void
 */

void print_triangle(int size)
{
	if (size > 0)
	{
		int a;
		int b;
		int c;

		a = 0;
		while (a < size)
		{
			b = 0;
			while (b < (size - 1 - a))
			{
				_putchar(' ');
				b++;
			}
			c = 0;
			while (c < (a + 1))
			{
				_putchar('#');
				c++;
			}
			_putchar('\n');
			a++;
		}
	}
	else
		_putchar('\n');
}
