#include "holberton.h"
/**
 * _print_rev_recursion - reverse a string with recursion
 * @s: string to print
 *
 * Return: void
*/
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		putchar(*s);
	}
	else
	{
		putchar(10);
	}
}
