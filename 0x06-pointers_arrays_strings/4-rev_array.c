#include<stdlib.h>
/**
 * reverse_array - reverse the content of an array of integers
 * @a: array of integers
 * @n: number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int *tmp;
	int i, j;

	tmp = malloc(sizeof(a) * sizeof(int));
	for (i = 0, j = n - 1; i < n; i++, j--)
		*(tmp + j) = *(a + i);
	for (i = 0; i < n; i++)
		*(a + i) = *(tmp + i);
	free(tmp);
}
