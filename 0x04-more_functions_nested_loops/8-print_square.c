#include "main.h"

/**
 * print_square - Print a square on the terminal
 * @size: Size of the square
 *
 * Descrition: Print a square of size, size, on the terminal
 *
 * Return: void
 *
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
