#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_len - Length of a string
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
 * create_file - Create a file
 * @filename: the name of the file
 * @text_content: the string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t written;
	size_t length;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		return (1);
	length = str_len(text_content);
	written = write(fd, text_content, length);
	if (written == -1)
		return (-1);
	close(fd);
	return (1);
}
