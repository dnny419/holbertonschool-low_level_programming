#include "holberton.h"
/**
 * print_line - print _
 * @n: variable to determinate
 * Return: void
 */
void print_line(int n)
{
	int a;

	if (n > 0)
	{
		for (a = 1; a <= n; a++)
		{
			_putchar(95);
		}
		_putchar(10);
	}
	else
	{
		_putchar(10);
	}
}
