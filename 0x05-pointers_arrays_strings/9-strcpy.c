/**
 * _strcpy - copies the string pointed by source to dest
 * @dest: dest string
 * @src: source string
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return dest;
}
