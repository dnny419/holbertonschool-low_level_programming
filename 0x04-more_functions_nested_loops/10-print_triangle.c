#include <stdio.h>
/**
 * print_triangle - make a fancy triangle!
 * @size: number of lines
 *
 */
void print_triangle(int size)
{
	int a, b, c, d, e;

	if (size > 0)
	{
		a = size;
		b = size - 1;

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
