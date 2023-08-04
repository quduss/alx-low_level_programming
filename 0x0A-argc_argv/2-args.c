#include <stdio.h>
/**
 * main - prints all arguments passed to main
 * @argc: number of string arguments
 * @argv: array of string arguments
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
