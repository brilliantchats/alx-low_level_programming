#include "main.h"

/*
 * _puts_recursion - print a string in reverse
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
		return;
	}
	else
	{
		_putchar(*s);
		_puts_recursion(++s);
	}
}
