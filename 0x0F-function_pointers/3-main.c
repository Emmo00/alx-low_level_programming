#include<stdio.h>
#include<stdlib.h>
#include "3-calc.h"
/**
 * main - entry point
 * collects command line argunents and pass it to get_op_func
 * @ac: number of arguments
 * @av: arguments given
 * Return: 0 (success)
 */
int main(int ac, char **av)
{
	int a, b;
	int (*func)(int, int);

	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(av[1]);
	b = atoi(av[3]);
	if ((*av[2] == '/' || *av[2] == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	func = get_op_func(av[2]);
	if (func == NULL || (av[2][1] != '\0'))
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", func(a, b));
	return (0);
}
