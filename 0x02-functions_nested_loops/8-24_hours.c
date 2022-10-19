#include "main.h"

/**
 * jack_bauer - Print time
 *
 * Description - Print time in a 24 hr format
 *
 * Return: void(Success)
 *
 */
void jack_bauer(void)
{
	int i, j, k, m;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 10; j++)
		{
			for (k = 0; k < 6; k++)
			{
				for (m = 0; m < 10; m++)
				{
					if (i == 2 && j > 3)
					{
						break;
					}
					_putchar(i + '0');
					_putchar(j + '0');
					_putchar(':');
					_putchar(k + '0');
					_putchar(m + '0');
					_putchar('\n');
				}
			}
		}
	}
}
