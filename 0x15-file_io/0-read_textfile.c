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
	char c;

	if (filename == NULL || letters == 0)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	i = 0;
	while ((read(fd, &c, sizeof(c))) > 0)
	{
		if ((write(STDOUT_FILENO, &c, sizeof(0))) < 0)
			return (0);
		i++;
	}
	close(fd);
	close(fd);
	return (i);
}
