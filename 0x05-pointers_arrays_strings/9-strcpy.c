#include <string.h>
/**
 * _strcpy - copies the string pointed to by src to dest , including the '\0'
 * @dest: the destination of the copied string
 * @src: the string to be copued
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	size_t len = strlen(src);
	int i;

	dest = malloc((len + 1) * char);
	for (i = 0; i < len; i++)
		*(dest + i) = *(src + i);
	*(dest + len) = '\0';
	return (dest);
}
