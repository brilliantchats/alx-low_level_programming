#include "main.h"

/**
 * print_rev - Print a string in reverse
 * @s: The string
 *
 * Description: Given a string, print it in reverse
 *
 * Return: void (Success)
 *
 */
void print_rev(char *s)
{
	int i, j;
	int str_len = 0;

	for (j = 0; *(s + j) != '\0'; j++)
	{
		str_len++;
	}

	for (i = str_len - 1; i >= 0; i++)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
