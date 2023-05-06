#include"main.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to number
 * @index: index
 * Return: 1 (success), -1(failed)
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask;

	if (index > 53 || !n)
		return (-1);
	mask = 1 << index;
	*n = (*n & ~mask) | (0 << index);
	return (1);
}
