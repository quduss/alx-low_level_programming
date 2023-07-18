#include "main.h"
/**
 * times_table - prints the 9 times table starting with 0
 * Return: void
 */

void times_table(void)
{
	int a;
	int b;
	int mul;

	a = 0;
	while (a < 10)
	{
		_putchar('0');
		b = 1;
		while (b < 10)
		{
			mul = a * b;
			_putchar(',');
			_putchar(' ');
			if (mul / 10 == 0)
			{
				_putchar(' ');
				_putchar(mul + '0');
			}
			else
			{
				_putchar((mul / 10) + '0');
				_putchar((mul % 10) + '0');
			}
		b++;
		}
	_putchar('\n');
	a++;
	}
}
