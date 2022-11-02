#include "main.h"

/**
 * _puts_recursion - Prints a string followed by a newline
 * @s: the string
 *
 * Description: Print a string recursively
 *
 * Return: Nothing
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(++s);
	}
}
