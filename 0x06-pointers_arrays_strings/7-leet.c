/**
 * leet - encodes a string into 1337
 * @s: string input to be encoded
 * Return: encoded string
 */

char *leet(char *s)
{
	char *a;
	char *b;
	char *c;
	int i;
	int j;

	a = "aeotl";
	b = "AEOTL";
	c = "43071";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == a[j] || s[i] == b[j])
				s[i] = c[j];
		}
	}
	return (s);
}
