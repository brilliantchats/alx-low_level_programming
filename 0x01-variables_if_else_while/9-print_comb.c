#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: Print all possible combinations of single digits in ascending
 *
 * Return: (0)Success
 *
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
