/**
 * set_bit - sets the value of a bit at a given index to 1
 * @n: number input
 * @index: index of the bit to set
 * Return: 1 if it works or -1 if an error occurs
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = *n | (1 << index);
	return (1);
}
