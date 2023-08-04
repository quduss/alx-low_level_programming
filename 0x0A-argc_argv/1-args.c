#include <stdio.h>
/**
 * main - prints the number of arguments passed to main
 * @argc: number of arguments passed to main
 * @argv: array of string arguments passed to main
 * Return: Always 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
