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
	_putchar(x);
	return (x);
}
