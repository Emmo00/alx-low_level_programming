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
	unsigned int len1, len2, i;

	len1 = 0;
	len2 = 0;
	if (s1 != NULL)
		while (s1[len1])
			len1++;
	else
		s1 = "";
	if (s2 != NULL)
		while (s2[len2])
			len2++;
	else
		s2 = "";
	nstr = (char *)malloc(((len1 + len2) * sizeof(char)) + 1);
	if (nstr == NULL)
		return (NULL);
	if (s2 != NULL)
		for (i = 0; i < len1; i++)
			*(nstr + i) = *(s1 + i);
	if (s2 != NULL)
		for (; i < len2 + len1; i++)
			*(nstr + i) = *(s2 + (i - len1));
	*(nstr + i) = '\0';
	return (nstr);
}
