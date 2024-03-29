#include<stddef.h>
/**
 * array_iterator - executes function on given parameters from an array
 * @array: array of integers
 * @size: size of the array
 * @action: pointer to function that is to be performed
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || size <= 0 || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
