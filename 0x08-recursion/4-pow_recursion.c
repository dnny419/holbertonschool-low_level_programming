#include "holberton.h"
/**
 * _pow_recursion - raise the power of
 * @x: base
 * @y: power
 *
 * Return: raised value
*/
int _pow_recursion(int x, int y)
{
	int base = x;
	int power = y;

	if (power <  0)
	{
		return(-1);
	}
	else if (power == 0)
	{
		return (1);
	}
	else
	{
		return (base * _pow_recursion(base, power - 1));
	}
}
