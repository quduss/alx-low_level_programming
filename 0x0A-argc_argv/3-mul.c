#include <stdlib.h>
#include <stdio.h>
/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of string arguments to main
 * Return: 0 if success and 1 if ERROR is printed
 */

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int a;
		int b;

		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", a * b);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
