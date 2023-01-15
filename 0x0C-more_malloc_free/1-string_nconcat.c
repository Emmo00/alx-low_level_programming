#include <stdlib.h>
/**
 * string_nconcat - concatenates two string
 * @s1: string one
 * @s2: string two
 * @n: number of bytes of the second string to copy to the first
 * Return: a pointer to a newly allocates space in memory, which contains s1,
 * followed by the first n bytes of s2
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *nstr;
	unsigned int len1, len2, i, j;

	len1 = 0;
	len2 = 0;
	if (s1 == NULL)
		s1 = "";
	else
		while (s1[len1])
			len1++;
	if (s2 == NULL)
		s2 = "";
	else
		while (s2[len2])
			len2++;
	len1--;
	len2--;
	nstr = malloc((sizeof(*nstr) * (len1 + len2)) + 1);
	if (nstr == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		*(nstr + i) = *(s1 + i);
	if (n >= len2)
		for (j = 0; j < len2; j++)
			*(nstr + i + j) = *(s2 + j);
	else
		for (j = 0; j < n; j++)
			*(nstr + i + j) = *(s2 + j);
	*(nstr + i + j) = '\0';
	return (nstr);
}
