/**
 * _islower - function that checks if a char is lowercase
 * Return: 1 if it's a lower case and 0 if not
 * @c: char to check
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
