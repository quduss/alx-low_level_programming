#include "main.h"
/**
 * print_alphabet - function that prints alphabets in lowercase
 * Return: void
 */

void print_alphabet(void)
{
	char a = 'a';

	while (a <= 'z')
		_putchar(a++);
	_putchar('\n');
}
