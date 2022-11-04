#include "main.h"

/**
 * _strspn - Get the length of a prefix substring
 * @s: The string to search in
 * @accept: the substring to search for
 *
 * Return: Length of substring
 *
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, len, found;

	len = 0;
	found = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				len++;
				found += 1;
				break;
			}
		}
		if (found)
		{
			found -= 1;
		}
		else
			break;
	}

	return (len);
}
