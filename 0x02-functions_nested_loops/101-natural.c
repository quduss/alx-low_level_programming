#include <stdio.h>
/**
 * main - prints the sum of all natural numbers below 1023
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int sum;

	sum = 0;
	for (i = 3; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			sum += i;
	}
	printf("%d\n", sum);
}
