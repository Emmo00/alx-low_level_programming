#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints the first 50 numbers in the fibonacci series
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	int n;
	int n_1;
	int next;

	n = 2;
	n_1 = 1;
	printf("%d, ", n_1);
	while (n < 50)
	{
		printf("%d, ", n);
		next = n + n_1;
		n_1 = n;
		n = next;
	}
	printf("\n");
	return (0);
}
