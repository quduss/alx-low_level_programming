/**
 * factorial - gets the factorial of an integer
 * @n: the integer input
 * Return: factorial of the integer input
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
