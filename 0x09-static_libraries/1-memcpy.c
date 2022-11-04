#include "main.h"

/**
 * _memcpy - copy bytes from src to dest
 * @dest: the destination string
 * @src: the source string
 * @n: the number of bytes to copy
 *
 * Return: the destination string
 *
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
