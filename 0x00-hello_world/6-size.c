#include <stdio.h>

/*
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

	printf("Size of a char: %c byte(s)\n", sizeof(x));
	printf("Size of an int: %d byte(s)\n", sizeof(y));
	printf("Size of a long int: %ld byte(s)\n", sizeof(z));
	printf("Size of a long long int: %lld byte(s)\n", sizeof(a));
	printf("Size of a float: %f byte(s)\n", sizeof(b));

	return (0);
}
