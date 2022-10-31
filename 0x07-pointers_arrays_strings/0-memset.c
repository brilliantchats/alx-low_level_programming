#include "main.h"

/**
 * _memset - Fills up a given memory
 * @s: String to be filled
 * @b: The byte to fill up the string
 * @n: The number of byte to be printed with b
 *
 * Description: Fill up memory pointed to by s with b
 *
 * Return: s (Pointer to the string)
 *
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	_putchar("\n");
	return (s);
}
