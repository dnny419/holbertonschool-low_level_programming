#include "holberton.h"
/**
 * _abs - return the absolute value of an integer
 * @n: number to return
 * Return: n for positive and -n per negative
 */
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else
	{
		return (-n);
	}
}