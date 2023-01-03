#include<stddef.h>
/**
 * _strchr - locates a character in a string
 * @s: string to be searched
 * @c: character to be searched for
 * Return: pointer to the first occurance
 */
char *_strchr(char *s, char c)
{
	int i;
	
	i = 0;
	while (s[i])
	{
		if (c == s[i])
			return (&s[i]);
		i++;
	}
	return (NULL);
}
