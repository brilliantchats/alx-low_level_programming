#include "main.h"

/**
 * print_array - Print elements of an array
 * @a: The arrya
 * @n: amount of elements to be printed
 *
 * Description: Print elements n of an array
 *
 * Return: void (Success)
 *
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			printf("%d\n", *(a + i));
		}
		else
		{
			printf("%d, ", *(a + i));
		}
	}
}
