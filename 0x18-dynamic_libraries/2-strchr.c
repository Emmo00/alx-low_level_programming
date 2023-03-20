/**
 * _strchr - locates a character in a string
 * @s: string to be searched
 * @c: character to be searched for
 * Return: pointer to the first occurance
 */
char *_strchr(char *s, char c)
{
	unsigned int i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}
	if (*(s + i) == c)
		return (s + i);
	return ('\0');
}
