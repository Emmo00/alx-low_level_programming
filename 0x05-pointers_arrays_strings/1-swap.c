/**
 * swap_int - exchanges the value of two integer variables
 * @a: first int
 * @b: second int
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
