/**
 * cap_string - capitalizes all words of a string
 * @s: string input to be modified
 * Return: pointer to the string
 */

char *cap_string(char *s)
{
	char *a = ",;.!?\"(){} \t\n";
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; a[j] != '\0'; j++)
		{
			if (s[i] == a[j])
			{
				if (s[0] >= 97 && s[0] <= 122)
					s[0] = s[0] - 32;
				if (s[i + 1] >= 97 && s[i + 1] <= 122)
					s[i + 1] = s[i + 1] - 32;
			}
		}
	}
	return (s);
}
