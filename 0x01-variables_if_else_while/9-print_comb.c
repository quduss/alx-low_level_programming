#include <stdio.h>
/**
 * main - a c program that prints 0-9 with comma and space separation
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a;

	a = 48;
	while (a <= 57)
	{
		putchar(a);
		if (!(a == 57))
		{
			putchar(',');
			putchar(' ');
		}
		a++;
	}
	putchar('\n');
	return (0);
}
