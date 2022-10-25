#include "main.h"

/**
 * _strcpy - Copy a string to another
 * @src: Source string
 * @dest: Destination string
 *
 * Description: Copy a string to a string buffer
 *
 * Return: a string (Success)
 *
 */
char *_strcpy(char *dest, char *src)
{
	int i, j;
	int str_len = 0;

	for (i = 0; *(src + i) != '\0'; i++)
	{
		str_len++;
	}
	for (j = 0; j <= str_len; j++)
	{
		*(dest + j) = *(src + j);
	}
	return (dest);
}
