#include<stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: minimum value (included)
 * @max: max value (included)
 * Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *p;
	int len, i;

	if (min > max)
		return (NULL);
	len = (max - min) + 1;
	p = malloc(sizeof(int) * len);
	for (i = min; i < max + 1; i++)
		p[i - min] = i;
	return (p);
}
