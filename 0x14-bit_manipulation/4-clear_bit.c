/**
 * clear_bit - sets the value of a bit at an index to 0
 * @n: pointer to integer input
 * @index: index of bit to set
 * Return: 1 if it works or -1 if an error occurs
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = *n & ~(1 << index);
	return (1);
}
