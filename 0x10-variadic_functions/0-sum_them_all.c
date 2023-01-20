#include<stdarg.h>
/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of parameters to be recieved
 * @...: parameters
 * Return: sum  of all
*/
int sum_them_all(const unsigned int n, ...)
{
    va_list args;
    unsigned int i, sum;

    sum = 0;
    if (n == 0)
        return (0);
    va_start(args, n);
    for (i = 0; i < n; i++)
    {
        sum += va_arg(args, int);
    }
    va_end(args);
    return (sum);
}