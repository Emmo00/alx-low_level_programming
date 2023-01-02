/**
 * _memset - fills memory with a constant byte
 * @s: pointer to string to be changed
 * @b: constant byte to change to
 * @n: number of bytes to be changed
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) = b;
	return (s);
}
