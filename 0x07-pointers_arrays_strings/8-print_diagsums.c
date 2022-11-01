#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Print the sum of two diagonals
 * @a: array
 * @size: Size of array
 *
 * Return: Nothing
 */
void print_diagsums(int *a, int size)
{
	int i, j, sum_f, sum_b;

	sum_f = 0;
	sum_b = 0;

	for (i = 0; i < 1; i++)
	{
		for (j = 0; j < size; j++)
		{
			sum_f += a[i + j][j];
		}
	}
	for (i = size - 1; i >= size - 1; i--)
	{
		for (j = 0; j < size; j++)
		{
			sum_b += a[i - j][j];
		}
	}
	printf("%d, %d", sum_f, sum_b);
}
