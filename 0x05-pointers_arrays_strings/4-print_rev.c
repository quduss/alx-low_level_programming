#include "main.h"
/**
 * print_rev - prints a string in reverse to stdout
 * @s: string input to reverse
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

void print_rev(char *s)
{
	int len;
	int i;

	len = _strlen(s);
	i = len - 1;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
