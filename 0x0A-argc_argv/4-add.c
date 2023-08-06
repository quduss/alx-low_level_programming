#include <stdlib.h>
#include <stdio.h>
/**
 * main - program that adds positive numbers
 * @argc: number of arguments to main
 * @argv: array of string arguments to main
 * Return: 1 if error is printed else 0
 */

int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		int i;
		int j;
		int k;
		int sum;

		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (!(argv[i][j] >= '0' && argv[i][j] <= '9'))
				{
					printf("Error\n");
					return (1);
				}
			}
		}
		sum = 0;
		for (k = 1; k < argc; k++)
			sum += atoi(argv[k]);
		printf("%d\n", sum);
		return (0);
	}
}
