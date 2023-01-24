#include<stdio.h>
#include<stdarg.h>
/**
 * print_strings - print strings, followed by a newline
 * @separator: the string to be printed between numbers
 * @n: number of integers passed to the function.
 * Return: nothing
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;

	va_start(args, n);
	if (separator == NULL || n < 1)
	{
		printf("\n");
		return;
	}
	for (i = 0; i < n; i++)
	{
		if (i != 0)
		{
			printf("%s", separator);
		}
		str = va_arg(args, char*);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
	}
	printf("\n");
	va_end(args);
}
