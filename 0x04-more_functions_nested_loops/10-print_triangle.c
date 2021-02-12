#include <stdio.h>
/**
 * print_triangle - make a fancy triangle!
 * @size: number of lines
 *
 */
void print_triangle(int size)
{
	int n = 20, a, b, c, d, e;

	if (n > 0)
	{
		a = n;
		b = n - 1;

		for (c = 1; c <= a; c++)
		{
			for (d = 1; d <= b; d++)
			{
				_putchar(32);
			}
			b--;
			for (e = 1; e <= c; e++)
			{
				_putchar(35);
			}
			_putchar(10);
		}
	}
	else
	{
		_putchar(10);
	}
}