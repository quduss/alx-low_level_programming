/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: 0 if same, negative difference if first is less than second
 * positive difference if first is greater than second
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	for (; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] == s2[i])
			continue;
		else
			break;
	}
	if (s1[i] == s2[i])
		return (0);
	else
		return (s1[i] - s2[i]);
}
