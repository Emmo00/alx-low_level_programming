#include "main.h"
/**
  print_alphabet_x10 - takes no arguments
 *
 * Description: prints the alphabet with the _putchar function in_putchar.c x10
 *
 * Return: Always 0 (Success)
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
