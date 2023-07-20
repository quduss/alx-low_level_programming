/**
 * _isupper - checks if input is uppercase
 * @c: integer input
 * Return: 1 if uppercase and 0 otherwise
 */
 int _isupper(int c)
{
	if ((c >= 65) && (c <= 90))
		return (1);
	else
		return (0);
}
