#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * print_strings - prints strings and separator in between
 * @separator: pointer to separator
 * @n: number of strings to print
 * @...: variable string arguments
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *s;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(ap, char *);
		if (s == NULL)
			printf("(nil)");
		if (s != NULL)
			printf("%s", s);
		if (i != (n - 1) && (separator != NULL))
			printf("%s", separator);
	}
	va_end(ap);
	printf("\n");
}
