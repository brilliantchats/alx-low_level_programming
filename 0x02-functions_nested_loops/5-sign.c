#include "main.h"

/**
 * print_sign: Print sign of a number
 * @n: number to be checked
 *
 * Description: Print sign of parameter number passed
 *
 * Return: 1(Positive), 0(Zero),-1(Negative)
 *
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar('0');
		return (0);
	} else
	{
		_putchar('-1');
		return (-1);
	}
}
