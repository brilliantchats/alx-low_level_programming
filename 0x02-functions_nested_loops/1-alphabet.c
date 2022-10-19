#include "main.h"

/**
 * main - Entry Point
 *
 * Description: Print alphabet in lowercase without stdlib
 *
 * Return: 0(Success)
 *
 */
int main(void)
{
	print_alphabet();
	_putchar('\n');
	return (0);
}

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}

	return;
}
