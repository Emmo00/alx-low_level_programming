#include "main.h"
/**
 * _islower - checks if an alphabet char is in lower case
 * @c: character input
 *
 * Return: 1 if char is lower otherwise 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
