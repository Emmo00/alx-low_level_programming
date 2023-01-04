/**
 * factorial - returns the factorial of a given number
 * @n: number input
 * Return: the value of the factorial of n, -1 if n < 0
 */
int factorial(int n)
{
	if (n == 1 || n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
