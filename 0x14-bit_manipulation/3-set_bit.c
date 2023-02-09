#include"main.h"
/**
 * set_bit - sets the value of a bit to one at a given index
 * @n: pointer to number
 * @index: index
 * Return: 1 (success), -1(failed)
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int ac;

	ac = 1;
	ac = ac << index;
	*n = *n | ac;
	return (1);
}
