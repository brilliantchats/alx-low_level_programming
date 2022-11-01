#include "main.h"

/**
 * _strstr - Find a substring
 * @haystack: the string
 * @needle: the substring to search for
 *
 * Return: pointer to the first char of the found substrng or null
 *
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, k, found;

	found = 0;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; j < 1; j++)
		{
			if (needle[j] == haystack[i])
			{
				found += 1;
				for (k = 0; needle[k] != '\0'; k++)
				{
					if (needle[k] != haystack[i + k])
					{
						found -= 1;
						break;
					}
				}
				if (found)
				{
					return (haystack + i);
				}
			}
		}
	}

	return ('\0');
}
