#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * append_text_to_file - append text to a given file
 * @filename: the name of the file
 * @text_content: the text to append
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t writing;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (text_content == NULL && fd == -1)
		return (-1);
	if (text_content == NULL && fd)
		return (1);
	if (fd == -1)
		return (-1);
	writing = write(fd, text_content, sizeof(text_content));
	if (writing == -1)
		return (-1);
	return (1);
}
