#include<stdio.h>

/**
 * main - Entry Point
 *
 * Description: Print alhabet characters
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
	putchar('\n');
	return (0);
}
