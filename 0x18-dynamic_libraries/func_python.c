#include <stdio.h>
/**
 * add - Add two numbers
 * @a: first integer
 * @b: second integer
 *
 * Return: Addition of a + b
 */
int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - Substruct two numbers
 * @a: first integer
 * @b: second integer
 *
 * Return: Substruction of a - b
 */
int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - Multiply two numbers
 * @a: first integer
 * @b: second integer
 *
 * Return: Multiplication of a * b
 */
int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - Divise two numbers
 * @a: first integer
 * @b: second integer
 *
 * Return: Division of a / b
 */
int div(int a, int b)
{
	if (b != 0)
		return (a / b);
	else
		return (0);
}

/**
 * mod - Calculate reminder of divison of two numbers
 * @a: first integer
 * @b: second integer
 *
 * Return: Modulo of a % b
 */
int mod(int a, int b)
{
	if (b != 0)
		return (a % b);
	else
		return (0);
}
