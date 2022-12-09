
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
	int c = 0;
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%d", c);
		c++;
	}
	putchar('\n');
	return (0);
}
