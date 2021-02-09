#include "holberton.h"
/**
 * jack_bauer - Program that prints hours and minutes
 *
 * No return
 */

int jack_bauer(void)
{
	int a, b, c, d, e, f;

	for (a = 0; a < 24; a++)
	{
		c = a / 10 + '0';
		d = a % 10 + '0';
		
		for (b = 0; b < 60; b++)
		{
			e = b / 10 + '0';
			f = b % 10 + '0';
			_putchar(c);
			_putchar(d);
			_putchar(58);
			_putchar(e);
			_putchar(f);
			_putchar(10);
		}
	}
}
