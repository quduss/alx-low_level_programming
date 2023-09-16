/**
 * get_endianness - checks whether machine is little or big endian
 * Return: 0 if big endian and 1 if little endian
 */

int get_endianness(void)
{
	int i = 1;
	char *ptr = (char *)&i;

	if (*ptr == 1)
		return (1);
	return (0);
}
