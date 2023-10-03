#include "main.h"
/**
 * main - entry point
 *
 * @argc: number of argument.
 *
 * @argv: two files.
 *
 * Return: 1 on success, 0 on failure.
 */
int main(int argc, char *argv[]);
int main(int argc, char *argv[])
{
	int f_from, f_to;
	ssize_t bytes_rd, bytes_wr;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	f_from = open(argv[1], O_RDONLY);
	if (f_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	f_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (f_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((bytes_rd = read(f_from, buf, 1024)) > 0)
	{
		bytes_wr = write(f_to, buf, bytes_rd);
		if (bytes_wr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (bytes_rd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	f_from = close(f_from);
	f_to = close(f_to);
	if (f_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_from);
		exit(100);
	}
	return (1);
}
