/**
 * _isupper - checks if input is uppercase
 * @c: char input
 * Return: 1 if uppercase and 0 if lowercase
 */
 int _isupper(int c)
{
	if ((c >= 65) && (c <= 90))
		return (1);
	else
		return (0);
}
