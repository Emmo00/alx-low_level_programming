#include<stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * of integers
 * @a: matrix
 * @size: the size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int sum, i;

	sum = 0;
	for (i = 0; i < size; i++)
		sum += a[size * i + i];
	printf("%d, ", sum);
	sum = 0;
	for (; i > 0; i--)
		sum += a[(size - 1) * i];
	printf("%d\n", sum);
}
