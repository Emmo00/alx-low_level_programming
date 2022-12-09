
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print combination of 2 digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int f = 48;
	int s = 49;
	int i;
	int j;
	int k;

	for (i = 0, k = 9; i < 9; i++)
	{
		s = 49 + i;
		for (j = k; j > 0; j--)
		{
			putchar(f);
			putchar(s);
			if (f == 56 && s == 57)
			{
				continue;
			}
			putchar(',');
			putchar(' ');
			s++;
		}
		f++;
		k--;
	}
	putchar('\n');
	return (0);
}
