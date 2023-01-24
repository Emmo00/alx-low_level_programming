#include "variadic_functions.h"
/**
 * print_all - prints anything
 * @format: string
 * Return: nothing
 */
void print_all(const char *const format, ...)
{
	va_list args;
	int i;
	char *str;

	va_start(args, format);
	i = 0;
	while (format[i])
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(args, int));
			break;
		case 'i':
			printf("%d", va_arg(args, int));
			break;
		case 'f':
			printf("%f", va_arg(args, double));
			break;
		case 's':
			str = va_arg(args, char *);
			if (str == NULL)
			{
				printf("(nil)");
			}
			printf("%s", va_arg(args, char*));
			break;
		default:
			break;
		}
		i++;
	}
	printf("\n");
}
