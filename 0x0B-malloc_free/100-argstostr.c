#include <stdlib.h>
#include <string.h>
/**
 * argstostr - concatenates all arguments of the main program
 * @ac: argument count
 * @av: array of the arguments
 * Return: pointer to the resulting concatenated string
 */

char *argstostr(int ac, char **av)
{
	int len;
	int i;
	int j;
	int k;
	int l;
	char *s;

	l = 0;
	len = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
		len += strlen(av[i]);
	s = malloc(sizeof(char) * (len + ac + 1));
	if (s == NULL)
		return (NULL);
	for (j = 0; j < ac; j++)
	{
		for (k = 0; av[j][k] != '\0'; k++)
			s[l++] = av[j][k];
		s[l++] = '\n';
	}
	return (s);
}
