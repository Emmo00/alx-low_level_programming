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
	long int n;
	long int n_1;
	long int next;
	int i;

	n = 2;
	n_1 = 1;
	printf("%ld, ", n_1);
	for (i = 0; i < 49; i++)
	{
		printf("%ld", n);
		if (i != 48)
			printf(", ");
		next = n + n_1;
		n_1 = n;
		n = next;
	}
	printf("\n");
	return (0);
}
