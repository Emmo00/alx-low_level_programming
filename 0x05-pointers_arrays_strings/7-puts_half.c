#include<unistd.h>
/**
 * puts_half - prints to half of a string
 * @str: character string
 * Return: nothing
 */
void _puts(char *str)
{
	int i, j;
	char br;

	i = sizeof(str);
	if (i % 2 == 0)
		j = i / 2;
	else
		j = (i - 1) / 2;
	br = '\n';
	while (j <= i)
	{
		write(1, &str[j], 1);
		j++;
	}
	write(1, &br, 1);
}
