#include "main.h"
/**
 * get_endianness - checks the endianness of the machine
 * Return: 0 if big endian, 1 if little
 */
int get_endianness(void)
{
	int n;
	char *c;

	n = 0x76543210;
	c = (char *)&n;
	if (*c == 0x10)
		return (1);
	else
		return (0);
}
