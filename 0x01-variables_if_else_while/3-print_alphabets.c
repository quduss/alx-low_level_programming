#include <stdio.h>
/**
 * main - Entry point
 * Description: A c program that prints the alphabet in lower+upper case
 * Return: Always 0 (Success)
 */

int main(void)
{
	char a;
	char b;

	a = 'a';
	b = 'A';
	while (a <= 'z')
	{
		putchar(a++);
	}
	while (b <= 'Z')
	{
		putchar(b++);
	}
	putchar('\n');
	return (0);
}
