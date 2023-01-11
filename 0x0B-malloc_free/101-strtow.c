#include<stdlib.h>
/**
 * strtow - splits a string into words
 * @str: string
 * Return: return an array to a string (words)
 */
char **strtow(char *str)
{
	char **words;
	int i, sp;

	i = 0;
	sp = 0;
	while (str[i])
	{
		if (str[i] == " ")
			sp++;
	}
}
