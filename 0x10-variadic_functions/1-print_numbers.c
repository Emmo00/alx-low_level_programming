#include<stdio.h>
#include<stdarg.h>
/**
 * print_numbers - print numbers, followed by a newline
 * @sepatator: the string to be printed between numbers
 * @n: number of integers passed to the function
 * Return: nothing
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
    va_list args;
    unsigned int i;

    va_start(args, n);
    for (i = 0; i < n; i++)
    {
        if (i != 0)
        {
            printf("%s", separator);
        }
        printf("%d", va_arg(args, int));
    }
    printf("\n");
}