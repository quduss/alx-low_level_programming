#include <stdio.h>
/**
 * main - Entry point
 * Description: A c program that prints the alphabet in lowercase and in
 * reverse.
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch;

	ch = 'z';
	while (ch >= 'a')
	{
		putchar(ch--);
	}
	putchar('\n');
	return (0);
}
