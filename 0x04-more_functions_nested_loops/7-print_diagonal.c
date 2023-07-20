#include "main.h"
/**
 * print_diagonal - prints a diagonal line on stdout
 * @n: number of diagonals to print
 * Return: void
 */

void print_diagonal(int n)
{
	if (n > 0)
	{
		int a;
		int b;

		a = 0;
		while (a < n)
		{
			b = 0;
			while (b < a)
			{
				_putchar(' ');
				b++;
			}
			_putchar('\\');
			_putchar('\n');
			a++;
		}
	}
	else
		_putchar('\n');
}
