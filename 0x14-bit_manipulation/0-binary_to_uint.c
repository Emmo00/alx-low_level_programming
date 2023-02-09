#include"main.h"
/**
 * binary_to_uint - converts a binary number to an unsinged int
 * @b: string of 1 and 0 chars
 * Return: converted number or 0 if there is:
 * one or more chars in the string is not 1 or 0,
 * b is null
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n, i;

	if (b == NULL)
		return (0);
	n = 0;
	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		n = n * 2;
		if (b[i] == '1')
			n = n + 1;
	}
	return (n);
}
