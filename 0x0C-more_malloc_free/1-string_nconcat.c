#include <string.h>
#include <stdlib.h>
/**
 * string_nconcat - concatenates the first n bytes of s2
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 * @n: n bytes of s2 to be concatenated
 * Return: pointer to the concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i;
	unsigned int j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n >= strlen(s2))
		s = malloc(strlen(s1) + strlen(s2) + 1);
	else
		s = malloc(strlen(s1) + n + 1);
	if (s == NULL)
		return (NULL);
	if (n < strlen(s2))
	{
		for (i = 0; s1[i] != '\0'; i++)
			s[i] = s1[i];
		for (j = 0; j < n; j++)
			s[i++] = s2[j];
		s[i++] = '\0';
	}
	else
	{
		for (i = 0; s1[i] != '\0'; i++)
			s[i] = s1[i];
		for (j = 0; j < strlen(s2); j++)
			s[i++] = s2[j];
		s[i++] = '\0';
	}
	return (s);
}
