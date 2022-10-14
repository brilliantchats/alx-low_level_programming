#include <stdio.h>

/*
 * main - Entry point
 *
 * Description - 'Print sizes of data types'
 *
 * return - Always 0 - Success
 *
 */
int main(void)
{
	char x;
	int y;
	long int z;
	long long int a;
	float b;

	printf("Size of a char: %c", sizeof(x), " byte(s)");
	printf("Size of an int: %d", sizeof(y), " byte(s)");
	printf("Size of a long int: %ld", sizeof(z), " byte(s)");
	printf("Size of a long long int: %lld", sizeof(a), " byte(s)");
	printf("Size of a float: %f", sizeof(b), " byte(s)");
}
