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
	int i, j, k, m, sum_f, sum_b;

	sum_f = 0;
	sum_b = 0;

	for (i = 0; i < 1; i++)
	{
		for (j = 0; j < size; j++)
		{
			sum_f = sum_f + a[i + j][j];
		}
	}
	for (k = size - 1; k >= size - 1; k--)
	{
		for (m = 0; m < size; m++)
		{
			sum_b = sum_b + a[k - m][m];
		}
	}
	printf("%d, %d", sum_f, sum_b);
}
