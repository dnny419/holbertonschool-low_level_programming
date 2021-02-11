#include "holberton.h"
/**
* print_numbers - Short description, single line
* main - print numbers
* Description: 0 to 9 followed by new line
* Return: void
*/
void print_numbers(void)
{
	int a;

	for (a = 48; a <= 57; a++)
	{
		_putchar(a);
	}
	_putchar(10);
}
