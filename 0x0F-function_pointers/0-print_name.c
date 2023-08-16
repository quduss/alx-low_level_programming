#include <stdlib.h>
/**
 * print_name - prints name
 * @name: name to print
 * @f: pointer to function to use to print name
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
