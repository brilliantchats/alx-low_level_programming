#include "main.h"

/**
 * _print_rev_recursion - print a string in reverse
 * @s: the string
 *
 * Return: Nothing
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\n')
	{
		_putchar('\n');
	}
	else
	{
		_print_rev_recursion(++s);
		_putchar(*s);
	}
}
