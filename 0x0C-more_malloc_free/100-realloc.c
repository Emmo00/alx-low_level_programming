#include<stdlib.h>
/**
 * _realloc - reallcates a memory block
 * @ptr: pointer to be reallocated
 * @old_size: size of the old pointer
 * @new_size: size of the new pointer
 * Return: pointer to the new block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *nptr;
	unsigned int i;

	if (old_size == new_size)
		return (ptr);
	if (ptr == NULL)
		return ((void *)malloc(new_size));
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	nptr = malloc(new_size);
	if (nptr == NULL)
		return (NULL);
	for (i = 0; i < old_size; i++)
		nptr[i] = ptr[i];
	free(ptr);
	return (nptr);
}
