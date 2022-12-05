#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * read_textfile - Reads and prints a text file provided
 * @filename: Name of the text file
 * @letters: the number of characters to be read and printed
 *
 * Return: the actual number of characters printed, 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t written, read_num;
	int fd;
	char *buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL || filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY, 00700);
	if (fd == -1)
		return (0);
	read_num = read(fd, buffer, letters);
	if (read_num == -1)
		return (0);
	written = write(STDOUT_FILENO, buffer, read_num);
	if (written == -1 || written != read_num)
		return (0);
	close(fd);
	return (written);
}
