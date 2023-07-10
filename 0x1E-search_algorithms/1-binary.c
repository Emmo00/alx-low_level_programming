#include "search_algos.h"
/**
 * print_array - print the array being searched by the binary
 * search algorithm
 * @array: pointer to array
 * @start: index to start printing
 * @end: index to stop printing
 * Return: nothing
*/
void print_array(int *array, size_t start, size_t end)
{
	size_t i;

	printf("Searching in array: ");
	for (i = start; i <= end; i++)
	{
		printf("%d", array[i]);
		if (i != end)
			printf(", ");
	}
	printf("\n");
}

/**
 * binary_search - searches for a value in a sorted array of integers
 * using the binary search algorithm
 * @array: pointer to the first element of the array
 * @size: number of elements in the array
 * @value: value to search for
 * Return: index of the value in the array.
 * or -1 if not present or array is NULL
*/
int binary_search(int *array, size_t size, int value)
{
	size_t start, end, mid;

	if (!array)
		return (-1);
	start = 0;
	end = size - 1;
	while (start <= end)
	{
		print_array(array, start, end);
		mid = start + (end - start) / 2;
		if (array[mid] == value)
			return (mid);
		if (array[mid] > value)
			end = mid - 1;
		if (array[mid] < value)
			start = mid + 1;
	}
	return (-1);
}
