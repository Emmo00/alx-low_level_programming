#include "variadic_functions.h"
/**
 * print_all - prints anything
 * @format: string
 * Return: nothing
 */
void print_all(const char *const format, ...)
{
	va_list args;
	int i, j;
	char *str;
	char *specs;

	va_start(args, format);
	i = 0;
	specs = "cifs";
	while (format[i])
	{
		j = 0;
		while (specs[j])
		{
			if (format[i] == specs[j] && (i != 0))
				printf(", ");
			j++;
		}
		
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
			str = va_arg(args, char*);
			if (str == NULL)
			{
				printf("(nil)");
			}
			printf("%s", str);
			break;
		default:
			break;
		}
		i++;
	}
	printf("\n");
}
