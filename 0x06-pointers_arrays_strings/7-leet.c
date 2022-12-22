/**
 * leet - encodes a string into 1337 (leet)
 * @s: string
 * Return: the converted string
 */
char *leet(char *s)
{
	char key[] = {'a', '4', 'e', '3', 'o', '0', 't', '7', 'l', '1'};
	int i, j;

	i = 0;
	do {
		j = 0;
		while (j < 10)
		{
			if (s[i] == key[j] || s[i] == key[j] - 32)
				s[i] = key[j + 1];
			j += 2;
		}
		i++;
	} while (s[i] != '\0');
	return (s);
}
