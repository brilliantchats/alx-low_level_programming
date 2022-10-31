#include "main.h"

/**
 * _strchr - Find first occurence of a character
 * @s: the string
 * @c: the character to search for
 *
 * Return: the pointer to the character address
 *
 */
char *_strchr(char *s, char c)
{
	int i, len;

	len = 0;

	while (s[len])
	{
		len++;
	}

	for (i = 0; i <= len; i++)
	{
		if (s[i] == c)
		{
			s += i;
			return (s);
		}
	}

	return ('\0');
}
