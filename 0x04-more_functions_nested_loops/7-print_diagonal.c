#include "holberton.h"
/**
 * print_diagonal - make a fancy diagonal!
 * @n: number of lines
 *
 */
void print_diagonal(int n)
{
	int a, b;

	if (n > 0)
	{
		for (a = 1; a <= n; a++)
		{
			for (b = 1; b <= a; b++)
			{
				if (a == b)
				{
					_putchar(92);
				}
				else
				{
					_putchar(32);
				}
			}
			_putchar(10);
		}
	}
	else
	{
		_putchar(10);
	}
}
