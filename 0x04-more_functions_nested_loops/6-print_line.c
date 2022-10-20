#include "main.h"

/**
 * print_line - Print a line on the terminal
 * @n: parameter for length of the line
 *
 * Description: Print a line n underscores long
 *
 * Return: void
 *
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
