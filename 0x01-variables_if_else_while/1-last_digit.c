#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * Description: checks last digit of a random number
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int ldigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ldigit = n % 10;
	printf("Last digit of %d is %d and is ", n, ldigit);
	if (ldigit > 5)
	{
		printf("greater than 5\n");
	} else if (ldigit == 0)
	{
		printf("0\n");
	} else if (ldigit < 5 && ldigit != 0)
	{
		printf("less than 6 and not 0\n");
	}

	return (0);
}
