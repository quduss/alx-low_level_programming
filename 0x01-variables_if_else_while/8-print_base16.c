#include <stdio.h>
/**
 * main - a c program that prints 0-9 and a-f
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a;
	char b;

	a = 48;
	b = 'a';
	while (a <= 57)
		putchar(a++);
	while (b <= 'f')
		putchar(b++);
	putchar('\n');
	return (0);
}
