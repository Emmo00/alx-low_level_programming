#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints the first 98 numbers in the fibonacci series
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	unsigned long int n, n_1, next;
	int i;

	n = 2;
	n_1 = 1;
	printf("%lu, ", n_1);
	for (i = 0; i < 98; i++)
	{
		printf("%lu", n);
		if (i != 97)
			printf(", ");
		next = n + n_1;
		n_1 = n;
		n = next;
	}
	printf("\n");
	return (0);
}
