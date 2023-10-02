#include "main.h"
/**
 * append_text_to_file -  function that appends text at the end of a file.
 *
 * @filename: the name of the file.
 *
 * @text_content: is the NULL terminated string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, bytes;
	int len = 0;

	if (!filename)
		return (-1);
	file = open(filename, O_WRONLY | O_APPEND);

	if (!file)
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
