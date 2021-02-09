#include "holberton.h"
/**
 * print_last_digit - print last digit
 * @a: value to know
 * Return: last digit
 */
int print_last_digit(int n)
{
	int a;
	if (n < 0)
	{
		a = a * -1;
	}
	else
	{
		a = n % 10;
	}
	_putchar (a + '0');
	return (a);
}
