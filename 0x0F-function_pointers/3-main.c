#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - perform simple operations
 * @argc: arguments count
 * @argv: array of string arguments
 * Return: 0 if no error
 */

int main(int argc, char *argv[])
{
	int (*a)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (!(argv[2][0] == '+' || argv[2][0] == '-' || argv[2][0] == '*' || argv[2][0] == '/' || argv[2][0] == '%'))
	{
		printf("Error\n");
		exit(99);
	}
	if ((argv[2][0] == '/' || argv[2][0] == '%') && argv[3][0] == '0')
	{
		printf("Error\n");
		exit(100);
	}
	a = get_op_func(argv[2]);
	if (a != NULL)
		printf("%d\n", a(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
