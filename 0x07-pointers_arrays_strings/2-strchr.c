#include <stddef.h>
/**
 * _strchr - locates the first occurrence of the character c
 * @s: string input
 * @c: character c
 * Return: pointer to the first occurrence
 */

char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (1)
	{
		if (s[i] == '\0')
			break;
		if (s[i] == c)
			return (s + i);
		i++;
	}
	if (s[i] == c)
		return (s + i);
	return (NULL);
}
