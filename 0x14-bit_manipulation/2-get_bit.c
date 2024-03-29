#include"main.h"
/**
 * get_bit - return the value of a bit at a given index
 * @n: number
 * @index: index
 * Return: value of bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 53)
		return (-1);
	return (((n >> index) & 1) ? 1 : 0);
}
