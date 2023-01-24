#include "3-calc.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * get_op_func - gets the correct function based on s
 * @s: character of operation
 * Return: pointer to function of the appropriate operation, NULL if character
 * dont
 * match supported operations
 */
int (*get_op_func(char *s))(int a, int b)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (ops[i].op)
	{
		if (*(ops[i].op) == *s)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
