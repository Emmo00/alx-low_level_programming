#include "variadic_functions.h"
/**
 * print_all - prints anything
 * @format: string
 * Return: nothing
 */
void print_all(const char *const format, ...)
{
	va_list args;
	int i = 0, j;
	char *str;
	char *specs;

	specs = "cifs";
	va_start(args, format);
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
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
