/**
 * _strstr - locates a substring
 * @haystack: string to search
 * @needle: substring to search
 * Return: pointer to the begining of the substring or
 * NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	i = 0;
	while (haystack[i])
	{
		j = 0;
		if (haystack[i] == needle[j])
			while (needle[j])
			{
				if (haystack[i + j] != needle[j])
				{
					break;
				}
				j++;
			}
		if (needle[j] == '\0')
			return (haystack + i);
		i++;
	}
	return ('\0');
}
