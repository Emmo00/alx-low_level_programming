#include<stdlib.h>
#include<stddef.h>
/**
 * str_concat - concatenates two strings
 *
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to a newly allocated space which contains contents of both
 * strings
 */
char *str_concat(char *s1, char *s2)
{
	char *nstr;
	unsigned int len1, len2;

	len1 = 0;
	len2 = 0;
	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;
	nstr = (char *)malloc(((len1 + len2) * sizeof(char)) + 1);
	if (nstr == NULL)
		return (NULL);
	while (*s1)
		*nstr++ = *s1++;
	while (*s2)
		*nstr++ = *s2++;
	*nstr = '\0';
	return (nstr - (len1 + len2));
}
