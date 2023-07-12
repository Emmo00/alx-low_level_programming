#include <math.h>
#include "search_algos.h"
/**
 * jump_search - search an array with the jump algo
 * @array: array to search
 * @size: size of the array
 * @value: number to search
 * Return: index of the number
*/
int jump_search(int *array, size_t size, int value)
{
	size_t i, start, end, gap;

	gap = sqrt(size);
	start = 0;
	end = gap;
	while (array[end] < value && start < size - 1)
	{
		printf("Value checked array[%ld] = [%d]\n", start, array[start]);
		start = end;
		end += gap;
		if (end > size - 1)
			end = size - 1;
	}
	printf("Value checked array[%ld] = [%d]\n", start, array[start]);

	printf("Value found between indexes [%ld] and [%ld]\n", start, start + gap);
	for (i = start; i < end + 1; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
