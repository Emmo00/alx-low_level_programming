/**
 * _strcmp - compares two strings
 * @s1: string
 * @s2: string
 * Return: return 0 if both are equal or positive or negative number of bytes
 * difference
 */
int _strcmp(char *s1, char *s2)
{
	unsigned int res1, res2, i;

	res1 = 0;
	res2 = 0;
	for (i = 0; s1[i] != '\0'; i++)
		res1 += s1[i];
	for (i = 0; s2[i] != '\0'; i++)
		res2 += s2[i];
	return (res1 - res2);
}
