#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints the sum of even-valued numbers of the
 * fibonacci series under 4000000
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	long int n;
	long int n_1;
	long int sum, next;

	n = 2;
	n_1 = 1;
	sum = 0;
	while (n < 4000000)
	{
		if (n % 2 == 0)
		{
			sum = sum + n;
		}
		next = n + n_1;
		n_1 = n;
		n = next;
	}
	printf("%ld", sum);
	printf("\n");
	return (0);
}
