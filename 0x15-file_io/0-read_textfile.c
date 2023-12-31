#include "main.h"
/**
 * read_textfile - function that reads a text file and prints it
 * to the POSIX standard output.
 *
 * @filename: name of the file.
 *
 * @letters: the number of letters it should read and print
 *
 * Return:the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t bytes;
	char *buf;

	if (!filename | !letters)
		return (0);
	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);

	buf = malloc(letters + 1);
	if (buf == NULL)
		return (0);

	bytes = read(file, buf, letters);
	if (bytes == -1)
	{
		free(buf);
		return (0);
	}
	bytes = write(STDOUT_FILENO, buf, bytes);
	if (bytes == -1)
	{
		free(buf);
		return (0);
	}
	close(file);
	free(buf);
	return (bytes);
}
