#include "main.h"
/**
 * print_line - prints a line on the terminal
 * @n: number of _ to print
 * Return: void
 */

void print_line(int n)
{
	if (n > 0)
	{
		int a;

		a = 0;
		while (a < n)
		{
			_putchar('_');
			a++;
		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}
