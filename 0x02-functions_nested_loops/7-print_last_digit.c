#include "main.h"

/**
 * print_last_digit - print last digit of a number
 * @i: number to be processed
 *
 * Description: Printthe last digit in a number
 *
 * Return: last digit of number(Success)
 *
 */
int print_last_digit(int i)
{
	int x;

	x = i % 10;
	if (x >= 0)
	{
		_putchar(x + '0');
		return (x);
	} else if (x < 0)
	{
		_putchar((x * -1) + '0');
		return (x * -1);
	}
	return (0);
}
