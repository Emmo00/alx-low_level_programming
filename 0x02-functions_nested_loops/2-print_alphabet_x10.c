#include "main.h"
/**
 * print_alphabet_x10 - writes the alphabet 10 times
 *
 * Description: prints the alphabet with the _putchar function in_putchar.c x10
 */
void print_alphabet_x10(void)
{
	char c;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (c = 97; c < 123; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
