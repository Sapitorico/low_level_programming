#include "main.h"
/**
 * main - entry point
 * @argc: argument count
 * @argv: arguments
 *
 * Return: 0 on success, 98 on error
 */
int main(int argc, char **argv)
{
	ssize_t fd = 0, rd = 0, size = 16;
	char *buff = NULL;

	buff = malloc(sizeof(*buff) * size);
	if (!buff)
		dprintf(STDERR_FILENO, "Error: malloc failed\n"), exit(98);
	if (argc != 2)
		dprintf(STDERR_FILENO, "Usage: %s elf_filename\n", argv[0]), exit(98);
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		dprintf(STDERR_FILENO, "Error: %s failed to open\n", argv[1]), exit(98);
	rd = read(fd, buff, size);
	if (rd == -1)
		dprintf(STDERR_FILENO, "Error: %s failed to read\n", argv[1]), exit(98);
	if (buff[0] != '\x7f' || buff[1] != 'E' || buff[2] != 'L' || buff[3] != 'F')
		dprintf(STDERR_FILENO, "%s is not an ELF file\n", argv[1]), exit(98);
	printf("Magic:   %02x %02x %02x %02x\n", buff[0], buff[1], buff[2], buff[3]);
	printf("Class:                             ELF%c\n", buff[4]);
	printf("Data:                              2's complement, little endian\n");
	printf("Version:                           1 (current)\n");
	printf("OS/ABI:                            UNIX - System V\n");
	printf("ABI Version:                       %02x\n", buff[7]);
	printf("Type:                              %02x\n", buff[16]);
	printf("Entry point address:               %02x %02x %02x %02x\n", buff[24], buff[25], buff[26], buff[27]);
	free(buff);
	close(fd);
	return (0);
}
