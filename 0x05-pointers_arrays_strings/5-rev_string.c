#include "main.h"

/**
 * rev_string - Reverse a string
 * @s: The string
 *
 * Description: Given a string,, reverse it
 *
 * Return: void (Success)
 *
 */
void rev_string(char *s)
{
	int i, j;
	int str_len = 0;
	char tmp[];

	for (i = 0; *(s + 1) != '\0'; i++)
	{
		str_len++;
	}

	for (j = 0; j < str_len; j++)
	{
		tmp[j] = *(s + (str_len - j - 1));
	}
	*s = tmp;
}
