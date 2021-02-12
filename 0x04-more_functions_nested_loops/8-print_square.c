#include "holberton.h"
/**
 * print_square - printing squares
 * @size: number of lines
 *
 */
void print_square(int size)
{
	int a, b;

	if (size > 0)
	{
		for (a = 1; a <= size; a++)
		{
			for (b = 1; b <= size; b++)
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
