/**
 * _strcmp - compares two strings
 * @s1: string
 * @s2: string
 * Return: return 0 if both are equal or positive or negative number of bytes
 * difference
 */
int _strcmp(char *s1, char *s2)
{
	unsigned int c1, c2;

	do {
		c1 = *s1++;
		c2 = *s2++;
		if (c1 == '\0')
			return (c1 - c2);
	} while (c1 == c2);
	return (c1 - c2);
}
