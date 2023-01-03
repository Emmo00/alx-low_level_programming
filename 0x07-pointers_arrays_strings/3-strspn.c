/**
 * _strspn - gets length of a prefix substring
 * @s: main string
 * @accept: substring to check for
 * Return: number of bytes in the initial segment s which
 * consist of only bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int counter, check, i, j;

	counter = 0;
	check = 0;
	i = 0;
	while (*(s + i) != '\0')
	{
		j = 0;
		while (*(accept + j) != '\0')
		{
			if (*(s + i) == *(accept + j))
			{
				counter++;
				check = 1;
				break;
			}
			j++;
		}
		if (check == 1)
		{
			check = 0;
		}
		else if (check == 0)
		{
			break;
		}
		i++;
	}
	return (counter);
}
