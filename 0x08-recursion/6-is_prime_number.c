#include "main.h"
/**
 * prime_number - Checks if a number is prime
 * @i: start position
 * @n: the actual number
 *
 * Return: 1 (prime) 0(not prime)
 */
int prime_number(int i, int n)
{
	if (n <= 1)
		return (0);
	else if (n == 2 || n == 3)
		return (1);
	else if (n % i == 0 && i != n)
		return (0);
	else if (n % i == 0 && i == n)
		return (1);
	else
		return (prime_number(i + 1, n));
}
/**
 * is_prime_number - Is a number prime or not
 * @n: the number
 *
 * Return: 1(prime) 0(not prime)
 */
int is_prime_number(int n)
{
	int i = 2;

	return (prime_number(i, n));
}
