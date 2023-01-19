#include<stdio.h>
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

	if (ac > 4 || ac < 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(av[1]);
	b = atoi(av[3]);
	get_op_func(av[2][0])(a, b);
	return (0);
}
