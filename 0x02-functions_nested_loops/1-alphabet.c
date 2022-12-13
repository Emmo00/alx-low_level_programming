#include "main.h"
/**
 * print_alphabet - writes the alphabet
 *
 * Description: prints the alphabet with the _putchar function in_putchar.c
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char c;

	for (c = 97; c < 123; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
