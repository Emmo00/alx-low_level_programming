#include "main.h"
/**
 * print_triangle - prints a triangle
 * @size: the size of the triangle()
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = size; i > 0; i--)
	{
		for (j = 1; j < size + 1; j++)
		{
			if (j - i < 0)
				_putchar(' ');
			else
				_putchar('#');
		}
		_putchar('\n');
	}
}
