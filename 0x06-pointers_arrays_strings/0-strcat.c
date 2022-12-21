#include<string.h>
/**
 * _strcat - concatenates two strings. appends src to dest
 * @src: string
 * @dest: string
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i;

	i = strlen(dest);
	j = 0;
	i++;
	while (src[j])
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	*(dest + i) = '\0';
	return (dest);
}
