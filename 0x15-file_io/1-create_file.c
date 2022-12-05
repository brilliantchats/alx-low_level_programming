#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - Length of a string
 * @str: the string
 *
 * Return: the length of the string
 */
size_t _strlen(char *str)
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
	if (open(filename, O_RDONLY))
		fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC);
	else
		fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 00600);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		return (-1);
	length = _strlen(text_content);
	written = write(fd, text_content, length);
	if (written == -1)
		return (-1);
	close(fd);
	return (1);
}
