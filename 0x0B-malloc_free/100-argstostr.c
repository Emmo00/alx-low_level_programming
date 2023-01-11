#include<stdlib.h>
/**
 * argstostr - concatenates all the arguments given
 * @ac: number of arguments
 * @av: argument vector
 * Return: pointer to new string or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, k, len;

	len = 0;
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j])
		{
			len++;
			j++;
		}
	}
	str = (char *)malloc((len * sizeof(char)) + ac + 1);
	if (str == NULL)
		return (NULL);
	k = 0;
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j])
			*(str + k++) = av[i][j++];
		*(str + k++) = '\n';
	}
	return (str);
}
