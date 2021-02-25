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
	if (y == 1)
	{
		return (1);
	}
	else
	{
		if (x % y == 0)
		{
			return (0);
		}
		else
		{
			return (aux(x, y - 1));
		}
	}
}
/**
 * is_prime_number - function to return a prime number
 * @n: integer
 *
 * Return: if pr number otherwise 0
*/
int is_prime_number(int n)
{
	if (n <=  1)
	{
		return (0);
	}
	else
	{
		return (aux(n, n - 1));
	}
}
