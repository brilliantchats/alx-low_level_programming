#include <stdio.h>

/**
 * main - Entry Point
 * 
 * Description: Print all possible combinations of single digits in ascending order
 *
 * Return: (0)Success
 *
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = i; j < 10; j++)
		{
			putchar(j + '0');
			if (j != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
		putchar('\n');
	}

	return (0);
}
