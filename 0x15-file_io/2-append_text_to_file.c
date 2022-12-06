#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_len - Length of string
 * @str: the string
 *
 * Return: the length of the string
 */
size_t str_len(char *str)
{
	size_t len = 0;
	int i;

	for (i = 0; str[i] != '\0'; i++)
		len++;
	return (len);
}
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
	size_t len;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (text_content == NULL && fd == -1)
		return (-1);
	if (text_content == NULL && fd)
		return (1);
	if (fd == -1)
		return (-1);
	len = str_len(text_content);
	writing = write(fd, text_content, len);
	if (writing == -1)
		return (-1);
	return (1);
}
