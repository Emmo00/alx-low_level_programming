#include "main.h"
/**
 * _puts_recursion - prints a string, followed by newline
 * @s: pointer to string to print
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
		return;
	_putchar(*s++);
}
