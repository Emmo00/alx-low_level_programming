#include<unistd.h>
/**
 * puts2 - prints odd position characters in a string
 * @str: character string
 * Return: nothing
 */
void puts2(char *str)
{
	int i;
	char br;

	i = 0;
	br = '\n';
	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			write(1, &str[i], 1);
		i++;
	}
	write(1, &br, 1);
}
