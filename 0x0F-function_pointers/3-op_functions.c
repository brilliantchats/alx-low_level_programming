#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - adds two integers
 * @a: first int
 * @b: second int
 *
 * Return: result of operation
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtract two integers
 * @a: first num
 * @b: second num
 *
 * Return: result of operation
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiply two integers
 * @a: first number
 * @b: second number
 *
 * Return: result of operation
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divide two integers
 * @a: first number
 * @b: second number
 *
 * Return: result of operation
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - modulus of first int modulo second int
 * @a: first number
 * @b: second number
 *
 * Return: result of operation
 */
int op_mod(int a, int b)
{
	return (a % b);
}
