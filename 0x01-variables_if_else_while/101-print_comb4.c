#include <stdio.h>
/**
 * main - a c program that prints possible combinations of three digits
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a;
	int b;
	int c;

	a = 48;
	while (a < 56)
	{
		b = 49;
		while (b < 57)
		{
			c = 50;
			while (c <= 57)
			{
				if ((b > a) && (c > b))
				{
					putchar(a);
					putchar(b);
					putchar(c);
					if (!(a == 55))
					{
						putchar(',');
						putchar(' ');
					}
				}
				c++;
			}
			b++;
		}
		a++;
	}
	putchar('\n');
}
