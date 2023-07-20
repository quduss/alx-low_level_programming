#include <stdio.h>

/**
 * main - Fizz-Buzz test
 * Return: 0 Always (Success)
 */

int main(void)
{
	int i;

	i = 1;
	while (i <= 100)
	{
		if (i != 100)
		{
			if ((i % 3) == 0 && (i % 5) == 0)
				printf("FizzBuzz");
			else if ((i % 3) == 0)
				printf("Fizz");
			else if ((i % 5) == 0)
				printf("Buzz");
			else
				printf("%d", i);
			printf(" ");
		}
		else
			printf("Buzz\n");
		i++;
	}
	return (0);
}
