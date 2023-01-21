#include<stdio.h>
#include<stdlib.h>
/**
 * op_add - add two integers
 * @a: integer
 * @b: integer
 * Return: sum of the two ints
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtracts two integers
 * @a: integer
 * @b: integer
 * Return: difference of the two integers
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiples two integers
 * @a: integer
 * @b: integer
 * Return: product of integers
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divides a by b
 * @a: dividend
 * @b: divisor
 * Return: quotient
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - find the modulus b of a
 * @a: integer
 * @b: integer
 * Return: result of modulus
 */
int op_mod(int a, int b)
{
	return (a % b);
}
