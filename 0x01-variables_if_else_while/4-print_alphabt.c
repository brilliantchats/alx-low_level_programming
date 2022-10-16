#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: Print lowercase alphabet except q and e
 *
 * Return: (0)Success
 *
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i != 'q' && i != 'e')
		{
			putchar(i);
		}
	}

	putchar('\n');
	return (0);
}
