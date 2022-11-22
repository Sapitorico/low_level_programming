#include "main.h"
/**
 * create_file - creates a file
 * @filename: file name
 * @text_content: the string to write
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t fd = 0, wr = 0;

	if (!filename)
		return (-1);
	if (!text_content)
		return (1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	wr = write(fd, text_content, strlen(text_content));
	if (wr == -1)
		return (-1);
	close(fd);
	return (1);
}
