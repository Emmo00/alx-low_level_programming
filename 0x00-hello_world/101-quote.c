#include <stdio.h>
/**
 * write - function
 *
 * Description: writes
 * @filedes: filedes
 * @buf: buf
 * @nbyte: no byte
 *
 * Return: 0
 */
int write(int filedes, const char *buf, unsigned int nbyte);
/**
 * main - Entry point
 *
 * Description: prints std output without printf or puts
 *
 * Return: 1
 */
int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
