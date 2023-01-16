#include "main.h"

/**
 * _strpbrk - Search a string for any set of bytes
 * @s: the string to be searched
 * @accept: the substring with the bytes to search for
 *
 * Return: pointer to first occurence or null
 *
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j, pointer, found;

	found = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				pointer = i;
				found += 1;
				break;
			}
		}
		if (found)
		{
			break;
		}
	}
	if (found)
		return (s + pointer);
	else
		return ('\0');
}
