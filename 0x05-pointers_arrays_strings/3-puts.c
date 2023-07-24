#include "main.h"
/**
 * _puts - prints a string followed by newline to stdout
 * @str: string to print
 */

void _puts(char *str)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}
