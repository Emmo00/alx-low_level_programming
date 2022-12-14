#include "main.h"
#include <stdio.h>
/**
 * times_table - prints the times table of n, between 0 and 15
 * @n: max time table to print
 */
void print_times_table(int n)
{
	int i;
	int j;

	if (n < 0 || n > 15)
		return;
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			printf("%4d", i * j);
			if (j != n)
				printf(",");
		}
		printf("\n");
	}
}
