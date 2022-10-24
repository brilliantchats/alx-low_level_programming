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
	int i;
	int str_len = _strlen(*s);

	for (i = str_len - 1; i >= 0; i++)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
