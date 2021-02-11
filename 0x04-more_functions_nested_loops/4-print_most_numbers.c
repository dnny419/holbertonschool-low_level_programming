#include "holberton.h"
/**
* print_most_numbers - Short description, single line
* main - print numbers
* Return: void
*/
int print_most_numbers(void)
{
	int a;

	for (a = 48; a <= 57; a++)
	{
		if (a != 50 && a != 52)
		{
			_putchar(a);
		}
	}
	_putchar(10);
}
