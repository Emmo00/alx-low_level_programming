#include<stddef.h>
/**
 * _strchr - locates a character in a string
 * @s: string to be searched
 * @c: character to be searched for
 * Return: pointer to the first occurance
 */
char *_strchr(char *s, char c)
{
	while (s)
	{
		if (c == *(s))
			return (s);
		s++;
	}
	return (NULL);
}
