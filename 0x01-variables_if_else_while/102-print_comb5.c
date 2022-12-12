
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print combination of two two digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char unit;
	char ten;
	char hundred;
	char thousand;
	int i;

	for (thousand = 0; thousand < 10; thousand++)
	{
		for (hundred = 0; hundred < 10; hundred++)
		{
			for (ten = 0; ten < 10; ten++)
			{
				for (unit = 1; unit < 10; unit++)
				{
					if ((thousand + 10 + hundred) < (ten + 10 + unit))
					{
						putchar(thousand + '0');
						putchar(hundred + '0');
						putchar(' ');
						putchar(ten + '0');
						putchar(unit + '0');
						if (!((unit == 57) && (hundred == 57) && (thousand == 57)))
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
