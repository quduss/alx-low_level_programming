#include "main.h"
/**
 * print_rev - prints a string in reverse to stdout
 * @s: string input to reverse
 */

void print_rev(char *s)
{
	int j;
	int len;
	int i;

	j = 0;
	while (s[j] != '\0')
		j++;
	len = j;
	i = len - 1;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
