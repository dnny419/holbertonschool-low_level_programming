#include "holberton.h"
/**
* print_alphabet - Short description, single line
* main - Alphabetic Holberton
* Description: A-z alphabet holberton
* Return: void
*/
void print_alphabet(void)
{
	int a;

	for (a = 97; a <= 122; a++)
	{
		_putchar(a);
	}
	_putchar(10);
}
