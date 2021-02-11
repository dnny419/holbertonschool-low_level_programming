#include "holberton.h"
/**
* print_numbers - Short description, single line
* main - print numbers
* Description: 0 to 9 followed by new line
* Return: void
*/
int print_most_numbers(void)
{
	int a;

	for (a = 48; a <= 57; a++)
	{
		if((a != 50) && (a != 52))
		{
			putchar(a);
		}
	}
	putchar(10);
}
