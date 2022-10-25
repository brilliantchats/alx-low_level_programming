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
	int i, j, k;
	int str_len = 0;
	char tmp[98];
	char *tmp = tmp;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		str_len++;
	}
	for (j = str_len - 1; j >= -1; j--)
	{
		if (j < 0)
		{
			*tmp = '\0';
			break;
		}
		*tmp = *(s + j);
		tmp++;
	}
	for (k = 0; k < str_len; k++)
	{
		*(s + k) = *(tmp + k);
	}
}
