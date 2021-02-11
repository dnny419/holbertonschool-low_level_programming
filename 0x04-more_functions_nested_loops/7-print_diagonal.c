#include "holberton.h"
/**
 * print_diagonal - make a fancy diagonal!
 * @n: number of lines
 *
 */
void print_diagonal(int n)
{
	int a, b, n;

	n = 20;

	if (n > 0)
	{
		for (a = 1; a <= n; a++)
		{
			for (b = 1; b <= a; b++)
			{
				if (a == b)
				{
					putchar(92);
				}
				else
				{
					putchar(32);
				}
			}
			putchar(10);
		}
	}
	else
	{
		putchar(10);
	}
}
