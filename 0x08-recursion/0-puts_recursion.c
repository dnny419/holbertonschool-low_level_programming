#include "holberton.h"
/**
 * rot13 - encode a string with rot13
 * @str: string to encode
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
