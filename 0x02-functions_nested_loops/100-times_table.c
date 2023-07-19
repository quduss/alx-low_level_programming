#include "main.h"
/**
 * print_times_table - prints the n times table, starting with 0
 * @n: integer input
 * Return: void
 */

void print_times_table(int n)
{
	if (n >= 0 && n <= 15)
	{
		int a;
		int b;
		int mul;

		a = 0;
		while (a <= n)
		{
			_putchar('0');
			b = 1;
			while (b <= n)
			{
				mul = a * b;
				_putchar(',');
				_putchar(' ');
				if (mul / 10 == 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(mul + '0');
				}
				else if ((mul / 10) >= 1 && (mul / 10) < 10)
				{
					_putchar(' ');
					_putchar((mul / 10) + '0');
					_putchar((mul % 10) + '0');
				}
				else
				{
					_putchar(mul / 100 + '0');
					_putchar((mul % 100) / 10 + '0');
					_putchar((mul % 100) % 10 + '0');
				}
				b++;
			}
			_putchar('\n');
			a++;
		}
	}
}
