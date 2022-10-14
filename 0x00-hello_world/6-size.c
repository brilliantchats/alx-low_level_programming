#include <stdio.h>

/**
 * main - Entry point
 *
 * Description - 'Print sizes of data types'
 *
 * Return - Always 0 (Success)
 *
 */
int main(void)
{
	char x;
	int y;
	long int z;
	long long int a;
	float b;

	printf("Size of a char: %zu byte(s)", sizeof(x));
	printf("Size of an int: %zu byte(s)", sizeof(y));
	printf("Size of a long int: %zu byte(s)", sizeof(z));
	printf("Size of a long long int: %zu byte(s)", sizeof(a));
	printf("Size of a float: %zu byte(s)", sizeof(b));

	return (0);
}
