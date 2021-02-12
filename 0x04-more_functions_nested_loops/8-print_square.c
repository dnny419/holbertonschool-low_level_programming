#include "holberton.h"
/**
 * print_diagonal - printing squares
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
				putchar(35);
			}
			putchar(10);
		}
	}
	else
	{
		putchar(10);
	}
}
