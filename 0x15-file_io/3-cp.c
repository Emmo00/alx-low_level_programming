#include<sys/stat.h>
#include<sys/types.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>

#define RW_RW_R__ (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)

void check_rw_error(int read, int write, char *file_from, char *file_to);
/**
 * main - entry point
 * copies the content of a file to another
 * @ac: argument count
 * @av: argument vector
 * Return: 0(success)
 */
int main(int ac, char **av)
{
	int fdr, fdw, nread, nwrite;
	char *file_from, *file_to, buffer[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = av[1];
	file_to = av[2];
	fdr = open(file_from, O_RDONLY);
	fdw = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, RW_RW_R__);
	check_rw_error(fdr, fdw, file_from, file_to);
	do {
		nread = read(fdr, buffer, sizeof(char) * 1024);
		nwrite = write(fdw, buffer, sizeof(char) * nread);
		check_rw_error(nread, nwrite, file_from, file_to);
	} while (nread > 0);
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
/**
 * check_rw_error - checks error in Read or Write actions
 * @read: int returned after read function
 * @write: int returned after write function
 * Return: nothing
 */
 void check_rw_error(int read, int write, char *file_from, char *file_to)
 {
	if (read < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	if (write < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
 }
