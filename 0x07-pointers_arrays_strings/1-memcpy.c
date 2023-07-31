/**
 * _memcpy - copies n bytes of src memmory area to dest
 * @dest: dest string
 * @src: source string
 * @n: number of bytes to copy from src
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
