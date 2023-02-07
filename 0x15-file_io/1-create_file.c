#include "main.h"
/**
 * create_file - creates a file and inputs string text_content in it
 * @filename: name of the file
 * @text_content: string to input in the file
 * Return: 1 (success),  0(failed)
 */
int create_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd < 0)
		return (-1);
	while (*text_content != '\0')
	{
		if ((write(fd, text_content++, sizeof(char))) < 0)
			return (-1);
	}
	return (1);
}
