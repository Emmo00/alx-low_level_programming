#include<stddef.h>
#include<stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string to copy
 * Return: pointer to new string, NULL otherwise
 */
char *_strdup(char *str)
{
	char *nstr;
	unsigned int len;

	if (str == NULL)
		return (NULL);
	len = 0;
	while (str[len])
		len++;
	nstr = (char *)malloc((len * sizeof(char)) + 1);
	if (nstr == NULL)
		return (NULL);
	while (*str)
		*nstr++ = *str++;
	*nstr = '\0';
	return (nstr - len);
}
