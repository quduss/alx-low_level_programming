#include <stdlib.h>
/**
 * _strdup - duplicates a string
 * @str: string input to duplicate
 * Return: pointer to duplicate
 */

char *_strdup(char *str)
{
	int len;
	int i;
	char *s;

	if (str == NULL)
		return (NULL);
	len = 0;
	while (str[len] != '\0')
		len++;
	s = malloc(sizeof(char) * len + 1);
	if (s == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		s[i] = str[i];
	s[i] = '\0';
	return (s);
}
