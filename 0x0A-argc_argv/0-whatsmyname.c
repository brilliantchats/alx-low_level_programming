#include "main.h"
/**
 * main - Entry point
 * @argc: counter of arguments
 * @argv: array of parameters
 *
 * Return: 0(Success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; *argv[i] != '\0'; i++)
	{
		_putchar(*argv[i]);
	}
	_putchar('\n');
	return (0);
}
