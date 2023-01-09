#include<stddef.h>
#include<stdlib.h>
/**
 * create_array - creates an array of characters and initialize it with a
 * specific char.
 * @size: size of array
 * @c: character to initialize with
 * Return: NULL if size = 0, pointer to array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	arr = malloc(sizeof(char) * size);
	for (i = 0; i < size; i++)
		*(arr + i) = c;
	*(arr + i) = '\0';
	return (arr);
}
