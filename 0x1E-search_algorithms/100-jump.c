#include "search_algos.h"

int jump_search(int *array, size_t size, int value)
{
	int i, start, end;

	start = 0;
	end = sqrt(n);
	while (array[end] < value && start < n)
	{
		start = end;
		end += sqrt(n);
		if (end > n)
			end = n;
	}
	for (i = start; i < end; i++)
		if (array[i] == value)
			return i
	return (-1);
}