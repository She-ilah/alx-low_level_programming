#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - function adds numbers
 * @a: first int
 * @b: second int
 * Return: int, sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function subtracts numbers
 * @a: first int
 * @b: second int
 * Return: int, subtraction of two ints
 */
int op_sub(int a, int b)

{
	return (a - b);
}

/**
 * op_mul - function multiplies numbers
 * @a: first int
 * @b: second int
 * Return: int, mulplication of two ints
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function divides two numbers
 * @a: first int
 * @b: second int
 * Return: int, division of two numbers
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - function finds remainder
 * @a: first int
 * @b: second int
 * Return: int, remainder
 */
int op_mod(int a, int b)
{
	return (a % b);
}
