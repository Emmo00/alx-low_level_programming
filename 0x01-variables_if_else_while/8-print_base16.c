#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all letters of the alphabet
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = 48;
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(c);
		c++;
	}
	c = 'a';
	for (i = 0; i < 6; i++)
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
