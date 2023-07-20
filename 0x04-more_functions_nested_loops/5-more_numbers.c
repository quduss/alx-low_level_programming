#include "main.h"
/**
 * more_numbers - prints 0-14 ten times
 * Return: void
 */

void more_numbers(void)
{
	int a;
	int b;

	a = 0;
	while (a < 10)
	{
		b = 0;
		while (b < 15)
		{
			if (b / 10 == 0)
				_putchar(b + '0');
			else
			{
				_putchar((b / 10) + '0');
				_putchar((b % 10) + '0');
			}
			b++;
		}
		_putchar('\n');
		a++;
	}
}
