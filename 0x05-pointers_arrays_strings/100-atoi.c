/**
 * _atoi - converts string to an integer
 * @s: input string
 * Return: the result of the conversion or 0 if there is no number in string
 */
int _atoi(char *s)
{
	unsigned int i, number;

	number = 0;
	i = 0;
	while (s[i] != '\0')/* check for numbers */
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			while (s[i])
			{
				if (!(s[i] >= '0' && s[i] <= '9'))
					break;
				number = (number * 10) + (s[i] - '0');
				i++;
			}
			break;
		}
		i++;
	}
	i = 0;
	while (s[i] != '0')/*check for the sign*/
	{
		if (s[i] == '-')
			number = number * (-1);
		if (s[i] >= '0' && s[i] <= '9')
			break;
		i++;
	}
	return (number);
}
