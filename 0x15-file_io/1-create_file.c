#include "main.h"
/**
 * create_file - function that creates a file.
 *
 * @filename: name of the file.
 *
 * @text_content: is a NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int file, bytes;
	int len = 0;

	if (!filename)
		return (-1);
	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (file == -1)
		return (-1);
	if (text_content != NULL)
	{

		while (text_content[len] != '\0')
			len++;
	}
	bytes = write(file, text_content, len);

	if (bytes == -1)
		return (-1);
	close(file);
	return (1);
}
