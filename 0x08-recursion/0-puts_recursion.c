#include "holberton.h"
/**
 * _puts_recursion - print the
 * @s: string to print
 *
 * Return: void
*/
void _puts_recursion(char *s)
{
	if (*s)
	{
		putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		putchar(10);
	}
}
