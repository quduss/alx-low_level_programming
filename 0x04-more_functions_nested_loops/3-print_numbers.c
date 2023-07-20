#include "main.h"
/**
 * print_numbers - prints 0-9 to stdout using only _putchar
 * Return: void
 */

void print_numbers(void)
{
	char a;

	a = '0';
	while (a <= '9')
		_putchar(a++);
	_putchar('\n');
}
