#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: Print the alphabet in both upper and lowercase
 *
 * Return: 0(Success)
 *
 */
int main(void)
{
	char i;

	for(i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	for(i = 'A'; i <= 'Z'; i++)
	{
		putchar(i);
	}

	putchar('\n');
	return (0);
}
