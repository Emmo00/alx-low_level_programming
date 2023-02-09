#include<sys/stat.h>
#include<sys/types.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>

#define RW_RW_R__ (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)
/**
 * main - entry point
 * copies the content of a file to another
 * @ac: argument count
 * @av: argument vector
 * Return: 0(success)
 */
int main(int ac, char **av)
{
	int fdr, fdw, nbuff;
	char *file_from, *file_to, *buffer;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = av[1];
	file_to = av[2];
	fdr = open(file_from, O_RDONLY);
	if (fdr < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	fdw = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, RW_RW_R__);
	if (fdw < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	buffer = malloc(sizeof(char) * 1024);
	do {
		nbuff = read(fdr, buffer, sizeof(char) * 1024);
		write(fdw, buffer, sizeof(char) * nbuff);
	} while (nbuff > 0);
	free(buffer);
	if ((close(fdr)) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdr);
		exit(100);
	}
	if ((close(fdw)) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdw);
		exit(100);
	}
	return (0);
}
