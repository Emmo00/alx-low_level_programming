#include<stddef.h>
/**
 * print_name - prints a name
 * @name: string
 * @f: pointer to function that prints name
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
