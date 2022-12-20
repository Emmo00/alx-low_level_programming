#include<unistd.h>
/**
 * print_rev - prints a string in reverse
 * @s: character string
 * Return: nothing
 */
void print_rev(char *s)
{
	int i;
	char br;

	i = 0;
	br = '\n';
	while (s[i] != '\0')
		i++;
	for (; i >= 0; --i)
		write(1, &s[i], 1);
	write(1, &br, 1);
}
