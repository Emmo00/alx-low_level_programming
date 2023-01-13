#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: ammout in bytes to be allocated
 * Return: pointer to allocated memory, exits with status 98
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
