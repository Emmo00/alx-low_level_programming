#include<stddef.h>
/**
 * _strpbrk - searches a string for any set of bytes
 * @s: string checked
 * @accept: sub-bytes
 * Return: pointer to the byte in s that matches one of the bytes in accept
 * otherwise NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	i = 0;
	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
				return (&s[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
