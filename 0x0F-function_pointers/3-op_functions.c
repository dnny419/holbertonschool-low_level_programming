#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - addition
 *
 * @a: First integer
 * @b: Second integer
 * Return: Integer.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtraction
 *
 * @a: First integer
 * @b: Second integer
 * Return: Integer.
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication
 *
 * @a: First integer
 * @b: Second integer
 * Return: Integer.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division
 *
 * @a: First integer
 * @b: Second integer
 * Return: Integer.
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - modulo
 *
 * @a: First integer
 * @b: Second integer
 * Return: Integer.
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
