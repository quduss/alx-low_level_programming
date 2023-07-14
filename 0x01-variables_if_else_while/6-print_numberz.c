#include <stdio.h>
/**
 * main - Entry point
 * Description: A c program that prints single digit numbers 0-9
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a;

	a = 48;
	while (a <= 57)
	{
		putchar(a++);
	}
	putchar('\n');
	return (0);
}
