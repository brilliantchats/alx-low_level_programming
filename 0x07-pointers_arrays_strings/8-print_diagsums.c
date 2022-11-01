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
	int i, sum_f, sum_b;

	sum_f = 0;
	sum_b = 0;

	for (i = 0; i < size; i++)
	{
		sum_f += a[(size + 1) * i];
		sum_b += a[(size - 1) * (i + 1)];
	}
	printf("%d, %d\n", sum_f, sum_b);
}
