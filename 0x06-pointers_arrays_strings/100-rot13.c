/**
 * rot13 - encodes a string using rot13
 * @s: input string
 * Return: modified string
 */

char *rot13(char *s)
{
	char a[] = "abcdefghijklmABCDEFGHIJKLMnopqrstuvwxyzNOPQRSTUVWXYZ";
	char rot[] = "nopqrstuvwxyzNOPQRSTUVWXYZabcdefghijklmABCDEFGHIJKLM";
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; a[j] != '\0'; j++)
		{
			if (s[i] == a[j])
			{
				s[i] = rot[j];
				break;
			}
		}
	}
	return (s);
}
