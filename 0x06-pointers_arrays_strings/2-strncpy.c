/**
 * _strncpy - copies at most n bytes from src to dest
 * @dest: destination string
 * @src: source string
 * Return: pointer to dest string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;


	for (i = 0; src[i] != '\0' && i < n; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
