#include "main.h"

/**
 * isupper - checks if input is uppercase
 * @c: char input
 * Return: 1 if uppercase and 0 if lowercase
 */
 int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
