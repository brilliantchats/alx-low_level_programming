#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#define BUFFER 1024
/**
 * read_write - read from one file and write in another
 * @read_desc: the file descriptor for read
 * @wrt_desc: the file descriptor for write
 * @buffr: the character buffer to read and write to
 * @frm: file to be copied
 * @to: destination file
 *
 * Return: nothing
 */
void read_write(int read_desc, int wrt_desc, char *buffr, char *frm, char *to)
{
	ssize_t read_num, written;

	while (1)
	{
		read_num = read(read_desc, buffr, BUFFER);
		if (read_num == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", frm);
			exit(98);
		}
		if (read_num == BUFFER)
		{
			written = write(wrt_desc, buffr, read_num);
			if (written == -1)
			{
				dprintf(STDERR_FILENO,
					"Error: Can't write to %s\n", to);
				exit(99);
			}
			free(buffr);
		}
		else if (read_num < BUFFER)
		{
			written = write(wrt_desc, buffr, read_num);
			if (written == -1)
			{
				dprintf(STDERR_FILENO,
					"Error: Can't write to %s\n", to);
				exit(99);
			}
			free(buffr);
			break;
		}
		buffr = malloc(BUFFER);
	}
}
/**
 * main - Main function
 * @argc: the number of arguments on the command line
 * @argv: character array of arguments on the command line
 *
 * Return: 0 for Success
 */
int main(int argc, char *argv[])
{
	int fd_read, fd_write, closed;
	char *buf = malloc(BUFFER);

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_read = open(argv[1], O_RDONLY);
	if (fd_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
				argv[1]);
		exit(98);
	}
	fd_write = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_write == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	read_write(fd_read, fd_write, buf, argv[1], argv[2]);
	closed = close(fd_read);
	if (closed == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_read);
		exit(100);
	}
	closed = close(fd_write);
	if (closed == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_write);
		exit(100);
	}
	return (0);
}
