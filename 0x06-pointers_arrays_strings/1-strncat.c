#include <stddef.h>
/**
 * _strncat - concatenates at most n bytes from src to dest
 * @dest: destination string
 * @src: source string
 * @n: max no of bytes from src to be appended
 * Return: pointer to dest string
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_len;
	int i;

	dest_len = 0;
	while (dest[dest_len] != '\0')
		dest_len++;

	i = 0;
	while (src[i] != '\0')
	{
		if (i == n)
			break;
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}
