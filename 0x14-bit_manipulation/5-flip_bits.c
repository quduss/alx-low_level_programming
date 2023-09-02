/**
 * flip_bits - counts the number of bits to flip in a number
 * to become another number.
 * @n: number to flip its bits
 * @m: number to become
 * Return: number of bits flipped.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i;
	unsigned long int o;

	i = 0;
	o = n ^ m;
	while (o > 0)
	{
		i++;
		o = o & (o - 1);
	}
	return (i);
}
