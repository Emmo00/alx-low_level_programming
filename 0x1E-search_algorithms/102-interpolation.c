#include "search_algos.h"
/**
 * interpolation_search - searches for a number with the interpolation
 * search algorithm
 * @array: array to search
 * @size: size of the array
 * @value: number to search for
 * Return: index of the number if found, else -1
*/
int interpolation_search(int *array, size_t size, int value)
{
	size_t high, low, guess;

	if (!array)
		return (-1);
	low = 0;
	high = size - 1;
	guess = low + ((value - array[low]) * (high - low)) /
		(array[high] - array[low]);
	if (value > array[high])
		printf("Value checked array[%ld] is out of range\n", guess);
	while (value >= array[low] && value <= array[high] && low <= high)
	{
		guess = low + ((value - array[low]) * (high - low)) /
		(array[high] - array[low]);
		if (guess < size)
			printf("Value checked array[%ld] = [%d]\n", guess, array[guess]);
		if (array[guess] == value)
		{
			return (guess);
		} else if (array[guess] < value)
		{
			low = guess + 1;
		} else
		{
			high = guess - 1;
		}
	}
	return (-1);
}
