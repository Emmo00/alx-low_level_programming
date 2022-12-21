#include<unistd.h>
#include<string.h>
/**
 * puts_half - prints to half of a string
 * @str: character string
 * Return: nothing
 */
void puts_half(char *str)
{
	int i, j;
	char br;

	i = strlen(str);
	if (i % 2 == 0)
		j = i / 2;
	else if (i == 0)
	{
		write(1, &br, 1);
		return;
	}
	else
	{
		j = (i - 1) / 2;
		j++;
	}
	br = '\n';
	while (j < i)
	{
		write(1, &str[j], 1);
		j++;
	}
	write(1, &br, 1);
}
