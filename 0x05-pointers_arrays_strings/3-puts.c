#include<unistd.h>
/**
 * _puts - prints to standard output
 * @str: character string
 * Return: nothing
 */
void _puts(char *str)
{
	int i;
	char br;

	i = 0;
	br = '\n';
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, &br, 1);
}
