#include <stdlib.h>

#include <time.h>

#include <stdio.h>

/* more headers goes there */

/**
 * main -Entry point
 *
 * Description: if-else once more
 *
 * Return: 0(Success)
 *
 */

int main(void)
{
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	/* Last digit of a number */
	last = n % 10;

	if (last > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, last);
	} else if (last < 6 && last != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not zero", n, last);
	} else
	{
		printf("Last digit of %d is %d and is zero", n, last);
	}
}
