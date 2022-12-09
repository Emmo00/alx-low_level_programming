
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print combination of 3 digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int f = 48;
	int s = 49;
	int t = 50;
	int i;
	int j;
	int k;
	int l;
	int m;

	for (i = 0, k = 8; i < 8; i++)
	{
		s = 49 + i;
		for (j = 0, l = i; j < 8; j++)
		{
			t = 50 + j + i;
			for (m = j; m < 8; m++)
			{
				if (f > 57 || s > 57 || t > 57)
				{
					break;
				}
				putchar(f);
				putchar(s);
				putchar(t);
				if (f == 55 && s == 56 && t == 57)
				{
					break;
				}
				putchar(',');
				putchar(' ');
				t++;
			}
			s++;
			l--;
		}
		f++;
		k--;
	}
	putchar('\n');
	return (0);
}
