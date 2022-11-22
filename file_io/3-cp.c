#include "main.h"
/**
 */
int main(int argc, char **argv)
{
	ssize_t fd = 0, ft = 0, rd = 0, wr = 0;
	char buff[BUFF_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	ft = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (ft == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((rd = read(fd, buff, BUFF_SIZE)))
	{
		if (rd == -1)
		{
			dprintf(2, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		wr = write(ft, buff, rd);
		if (wr == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}

	}
	if ((close(fd) == -1))
	{
		dprintf(2, "Error: Can't close fd %ld\n", fd);
		exit(100);
	}
	if ((close(ft) == -1))
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %ld\n", ft);
		exit(100);
	}
	return (0);
}
