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
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}

	return (NULL);
}
