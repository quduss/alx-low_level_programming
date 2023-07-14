#include <stdio.h>
/**
 * main - a c program that prints all possible different combinations
 * of two digits
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a;
	int b;

	a = 48;
	while (a < 57)
	{
		b = 48;
		while (b <= 57)
		{
			if (b > a)
			{
				putchar(a);
				putchar(b);
				if (!(a == 56))
				{
					putchar(',');
					putchar(' ');
				}
			}
		b++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}
