#include<stdio.h>
#include<stdarg.h>
/**
 * print_numbers - print numbers, followed by a newline
 * @sepatator: the string to be printed between numbers
 * @n: number of integers passed to the function
 * Return: nothing
*/
void print_numbers(const *separator, const unsigned int n, ...)
{
    va_list args;
    unsigned int i;

    va_start(args, n);
    for (i = 0; i < n; i++)
    {
        printf("%d", va_arg(args, int));
        if (i != --n)
        {
            printf("%s", separator);
        }
    }
    printf("\n");
}