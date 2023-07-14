#include <stdio.h>
/**
 * main - Entry point
 * Description: A c program that prints the alphabet in lowercase
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch;

	ch = 'a';
	while (ch <= 'z')
	{
		putchar(ch++);
	}
	putchar('\n');
	return (0);
}
