/**
 * rot13 - encodes a string using the rot13
 * @s: string
 * Return: encoded string
 */
char *rot13(char *s)
{
	int i;

	i = 0;
	do {
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = 97 + (((s[i] - 97) + 13) % 26);
		if (s[i] >= 'A' && s[i] <= 'Z')
			s[i] = 65 + (((s[i] - 65) + 13) % 26);
		i++;
	} while (s[i] != '\0');
	return (s);
}
