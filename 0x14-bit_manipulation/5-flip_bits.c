#include"main.h"
/**
 * flip_bits - returns the number of bits you would
 * need to flip to get from one number to another.
 * @n: fist number
 * @m: number to change
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count;
	unsigned long int i;

	count = 0;
	i = n ^ m;
	while (i > 0)
	{
		i = i & (i - 1);
		count++;
	}
	return (count);
}
