#include "main.h"

/**
 * times_table - Create a times table
 *
 * Description: A multiplication table
 *
 * Return: void(Success)
 *
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (j == 9)
			{
				if ((i * j) >= 10)
				{
					_putchar(((i * j) / 10) + '0');
					_putchar(((i * j) % 10) + '0');
				} else
				{
					_putchar((i * j) + '0');
				}
				_putchar('\n');
			} else
			{
				if ((i * j) >= 10)
				{
					_putchar(((i * j) / 10) + '0');
					_putchar(((i * j) % 10) + '0');
				} else
				{
					_putchar((i * j) + '0');
				}
				_putchar(',');
				_putchar(' ');
			}
		}
	}
}
