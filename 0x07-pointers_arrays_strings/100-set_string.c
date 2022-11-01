#include "main.h"

/**
 * set_string - set a value of a pointer to a char
 * @s: the string to change
 * @to: source string
 *
 * Return: Nothing
 */
void set_string(char **s, char *to)
{
	int i, j, len;

	for (i = 0; to[i] != '\0'; i++)
	{
		len++;
	}
	for (j = 0; j <= len; j++)
	{
		s[j] = to[j];
	}
}
