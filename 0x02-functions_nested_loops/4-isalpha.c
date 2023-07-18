/**
 * _isalpha - checks if char input is a letter
 * Return: 1 if char input is a letter and 0 if not
 * @c: char input
 */
int _isalpha(int c)
{
	if (c >= 'A' && c <= 'z')
		return (1);
	return (0);
}
