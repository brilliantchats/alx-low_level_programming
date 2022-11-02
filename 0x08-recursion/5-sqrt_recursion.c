#include "main.h"
/**
 * _find_sqrt - find square root
 * @n: original number
 * @i: the start number
 *
 * Return: sqrt or -1 if doesn't exist
 */
int _find_sqrt(int i, int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (n);
	else if (i * i == n)
		return (i);
	else if (i * i > n)
		return (-1);
	else
		return (_find_sqrt(i + 1, n));
}
/**
 * _sqrt_recursion - find natural sqaure root
 * @n: number
 *
 * Return: square root or -1 if doesn't exist
 */
int _sqrt_recursion(int n)
{
	int i = 2;

	return (_find_sqrt(i, n));
}
