#include "main.h"
/**
 * main - copies the content of a file to another file.
 * @argc: argument counter
 * @argv: arguments:
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	ssize_t fd = 0, ft = 0, rd = 0, wr = 0;
	char buff[BUFF_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	}
	if ((fd = open(argv[1], O_RDONLY)) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);
	}
	if ((ft = open(argv[2], O_WRONLY |  O_CREAT | O_TRUNC, 0664)) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
	while ((rd = read(fd, buff, BUFF_SIZE)))
	{
		if (rd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);
		}
		if ((wr = write(ft, buff, rd)) == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
		}
	}
	if ((close(fd) == -1))
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %ld\n", fd), exit(100);
	}
	if ((close(ft) == -1))
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %ld\n", ft), exit(100);
	}
	return (0);
}
