#include"main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standart out
 * @filename: file to read
 * @letters: number of letters to print
 * Return: actual number of letters read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t i;
	int fd;
	char *buff;

	if (filename == NULL || letters == 0)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	i = 0;
	buff = malloc(sizeof(*buff) * letters);
	i = read(fd, buff, sizeof(*buff) * letters);
	if ((write(STDOUT_FILENO, buff, sizeof(*buff) * i)) < 0)
		return (0);
	close(fd);
	return (i);
}
