#include <stddef.h>
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string input to search
 * @accept: set of bytes to search for
 * Return: pointer to the first occurrence of match in string
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (&(s[i]));
			}
		}
	}
	return (NULL);
}
