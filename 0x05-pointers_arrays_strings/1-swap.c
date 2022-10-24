#include "main.h"

/**
 * swap_int - Swap values of two integers
 * @a: First pointer param
 * @b: Second pointer param
 *
 * Description: Take two pointers, swap the values of the var they point to
 *
 * Return: void (Success)
 *
 */
void swap_int(int *a, int *b)
{
	int tmp_a = *a;
	*a = *b;
	*b = tmp_a;
}
