#include "main.h"

/**
 * _strlen - return string length
 * @str: string length
 *
 * Return: integer length of string
 */

int _strlen(char *str)
{
	int i = 0;

	if (!str)
		return (0);
	while (*str++)
		i++;
	return (i);
}

/**
 * append_text_to_file - append text.
 * @filename: file_name.
 * @text_content: text to write.
 *
 * Return: no return.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t size = 0;
	ssize_t length = _strlen(text_content);

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (length)
		size = write(fd, text_content, length);
	close(fd);
	return (size == length ? 1 : -1);
}
