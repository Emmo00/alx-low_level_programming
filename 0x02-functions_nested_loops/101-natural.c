#include<stdio.h>
/**
 * main - entry point
 *
 * Description: prints the sum of the multiples of 3 and 5 under 1024
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int i;
	int sum;

	sum = 0;
	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum = sum + i;
	}
	printf("%d\n", sum);
}
