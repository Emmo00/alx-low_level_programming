#include "main.h"
/**
 * print_alphabet_x10 - writes the alphabet
 *
 * Description: prints the alphabet with the _putchar function in_putchar.c
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char c = 97;

	for (c = 97; c < 123; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
	return;
}
