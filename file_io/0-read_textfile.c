#include "main.h"
/**
 * read_textfile -  reads a text file and prints
 * @filename: file name
 * @letters: number of letters it should read and print
 *
 * Return: number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd = 0, len  = 0, wr = 0;
	char *buffer = NULL;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char *) * letters);
	if (!buffer)
		return (0);
	len  = read(fd, buffer, letters);
	if (len == -1)
		return (0);
	wr = write(STDOUT_FILENO, buffer, len);
	if (wr == -1)
		return (0);
	close(fd);
	return (wr);
}
