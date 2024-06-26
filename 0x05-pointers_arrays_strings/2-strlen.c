/**
 * _strlen - gets the length of a string
 * @s: pointer to the string
 * Return: length of the string
 */

int _strlen(char *s)
{
	int len;

	len = 0;
	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
