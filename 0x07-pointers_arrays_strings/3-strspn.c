/**
 * _strspn - gest the length of a prefix substring
 * @s: string input
 * @accept: the list of which the bytes counted must be part of
 * Return: length of prefix substring
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int k;
	unsigned int l;

	l = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ')
			break;
	}

	for (j = 0; j < i; j++)
	{
		for (k = 0; accept[k] != '\0'; k++)
		{
			if (s[j] == accept[k])
			{
				l++;
				break;
			}
		}
	}
	return (l);
}
