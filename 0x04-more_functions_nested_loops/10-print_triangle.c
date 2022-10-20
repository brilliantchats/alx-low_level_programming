#include "main.h"

/**
 * print_triangle - Print a triangle
 * @size: Size of the triangle
 *
 * Description: Print a triangle on the terminal
 *
 * Return: void
 *
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (i = 0; i < size; i++)
	{
		for (j = i; j < size - 1; j++)
		{
			_putchar(' ');
		}
		for (k = 0; k < i + 1; k++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
