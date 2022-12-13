/**
 * main - entry point
 *
 * Description: prints "_putchar" with the _putchar function in_putchar.c
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int _putchar(char c);
	char* str = "_putchar";
	
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
	return (0);
}
