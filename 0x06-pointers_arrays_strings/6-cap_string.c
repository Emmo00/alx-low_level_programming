/**
 * cap_string - capitalize all words in a string
 * @s: string
 * Return: pointer to result string
 */
char *cap_string(char *s)
{
	char spt[] = {32, 9, 10, ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};
	int i, j;

	i = 0;
	if (s[0] >= 'a' && s[0] <= 'z')
		s[0] -= 32;
	while (s[i] != '\0')
	{
		j = 0;
		while (j < 13)
		{
			if (s[i] == spt[j] && (s[i + 1] >= 'a' && s[i + 1] <= 'z'))
				s[i + 1] -= 32;
			j++;
		}
		i++;
	}
	return (s);
}
