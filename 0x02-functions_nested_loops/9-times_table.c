#include "main.h"
#include <stdio.h>
/**
 * times_table - prints the nine times table
 */
void times_table(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			printf(",%3d", i * j);
		}
		printf("\n");
	}
}
