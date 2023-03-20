#include "main.h"
/**
 * _isalpha - checks if a given char is an alphabet
 * @c: character input
 *
 * Return: 1 if char is an alphabet, lower or upper, otherwise 0
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
