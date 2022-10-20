#include "main.h"

/**
 * more_numbers - Print numbers 0-14
 *
 * Description: Repeat the pattern 0-14, 10 times
 *
 * Return: void
 *
 */
void more_numbers(void)
{
	int i, j, d, m;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			d = j / 10;
			m = j % 10;

			if (d)
			{
				_putchar(d + '0');
			}
			_putchar(m + '0');
		}
		_putchar('\n');
	}
}
