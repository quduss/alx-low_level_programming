#include <stdio.h>
/**
 * main - Entry point
 * Description: A c program that prints the alphabet in lowercase except q and e
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch;

	ch = 'a';
	while (ch <= 'z')
	{
	if (!(ch == 'q' || ch == 'e'))
		putchar(ch);
	ch++;
	}
	putchar('\n');
	return (0);
}
