/**
 * _isupper - checks for uppercase character
 * @c: input character or int
 * Return: 1 if c is uppercase, otherwide 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
