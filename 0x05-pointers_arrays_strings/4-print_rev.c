#include<unistd.h>
/**
 * print_rev - prints a string in reverse
 * @s: character string
 * Return: nothing
 */
void print_rev(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	for (; i >= 0; --i)
		write(1, &s[i], 1);
}
