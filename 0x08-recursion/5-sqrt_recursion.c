#include "holberton.h"
/**
 * aux - aux function
 * @x: int times x
 * @y: int times y
 *
 * Return: void
*/
int aux(int x, int y)
{
	int div = x * x;

	if (div == y)
	{
		return (x);
	}
	else if (div > y)
	{
		return (-1);
	}
	else
	{
		return (aux(x + 1, y));
	}
}
/**
 * _sqrt_recursion - natural square root of
 * @n: integer
 *
 * Return: void
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (aux(1, n));
	}
}
