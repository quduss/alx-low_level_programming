#include "main.h"
/**
 * puts_half - prints the second half of a string
 * @str: string input
 */

void puts_half(char *str)
{
	int len;
	int i;

	len = 0;
	while (str[len] != '\0')
		len++;

	i = len / 2;
	if (len % 2 != 0)
		i = (len / 2) + 1;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
