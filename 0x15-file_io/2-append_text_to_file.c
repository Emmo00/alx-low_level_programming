#include"main.h"
/**
 * append_text_to_file - appends text to a file
 * @filename: name of the file
 * @text_content: text to write
 * Return: 1 (success) , -1 (failed)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (-1);
	if (text_content == NULL)
		return (1);
	while (*text_content != '\0')
		write(fd, text_content++, sizeof(char));
	return (1);
}
