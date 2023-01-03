/**
 * _strstr - locates a substring
 * @haystack: string to search
 * @needle: substring to search
 * Return: pointer to the begining of the substring or
 * NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, found = 0;

	i = 0;
	while (haystack[i])
	{
		j = 0;
		if (haystack[i] == needle[j])
			while (needle[j])
			{
				if (haystack[i + j] == needle[j])
				{
					found = 1;
					j++;
				}
				else
				{
					found = 0;
					break;
				}
			}
		if (found == 1)
			return (haystack + i);
		i++;
	}
	return ('\0');
}
