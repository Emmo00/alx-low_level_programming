#include<unistd.h>
#include<stdlib.h>
/**
 * rev_string - prints a string in reverse
 * @s: character string
 * Return: nothing
 */
void rev_string(char *s)
{
	int i;
	char br;
	char *tmp;

	i = 0;
	br = '\n';
	tmp = malloc(sizeof(s));
	while (s[i] != '\0')
	{
		i++;
		tmp[i] = s[i];
	}
	for (i--; i >= 0; i--)
		s[i] = tmp[i];
	free(tmp);
}
