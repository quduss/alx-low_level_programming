#include <stddef.h>
/**
 * _strstr - finds first occurrence of string needle in string
 * haystack
 * @haystack: haystack string
 * @needle: needle string
 * Return: pointer to first occurrence in haystack
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
			return (&(haystack[i]));
		}
	}
	return (NULL);
}
