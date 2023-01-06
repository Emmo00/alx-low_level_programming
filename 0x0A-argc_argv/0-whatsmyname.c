#include "main.h"
/**
 * main - entry point
 * @argc: number of arguments passed to program
 * @argv: array of strings containing the command line arguments
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int i;

	(void) argc;

	i = 0;
	while (argv[0][i])
		_putchar(argv[0][i++]);
	_putchar('\n');
	return (0);
}
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
