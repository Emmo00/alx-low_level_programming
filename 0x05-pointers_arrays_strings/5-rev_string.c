#include<stdlib.h>
/**
 * rev_string - prints a string in reverse
 * @s: character string
 * Return: nothing
 */
void rev_string(char *s)
{
	int i;
	char *tmp;

	i = 0;
	tmp = malloc(sizeof(s));
	while (s[i] != '\0')
	{
		tmp[i] = s[i];
		i++;
	}
	for (i--; i >= 0; i--)
		s[i] = tmp[i];
	free(tmp);
}
