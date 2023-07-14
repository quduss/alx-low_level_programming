#include <stdio.h>
/**
 * main - Entry point
 * Description: A c program that prints single digit numbers 0-9
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch;

	ch = '0';
	while (ch <= '9')
	{
		putchar(ch++);
	}
	putchar('\n');
	return (0);
}
