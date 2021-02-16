#include "holberton.h"
/**
* print_rev - print reversed string, followed by a new line
* @s: string
*
* Return: void
*/
void print_rev(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{

	}
	a--;
	while (a >= 0)
	{
		_putchar(s[a--]);
	}
	_putchar(10);
}
