#include<stdlib.h>
/**
 * rev_string - prints a string in reverse
 * @s: character string
 * Return: nothing
 */
void rev_string(char *s)
{
	int i, j;
	char *tmp;

	i = 0;
	tmp = malloc(sizeof(s));
	while (s[i] != '\0')
	{
		tmp[i] = s[i];
		i++;
	}
	for (i--, j = 0; i >= 0; i--)
	{
		s[j] = tmp[i];
		j++;
	}
	free(tmp);
}
