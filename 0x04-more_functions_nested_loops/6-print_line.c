#include "holberton.h"
/**
* print_line - Short description, single line
* main - print _
* Description: according to the number type _
* Return: void
*/
void print_line(int n)
{
	int a;

	if (n > 0)
	{
		for (a = 1; a <= n; a++)
		{
			putchar(95);
		}
	}
	else
	{
		putchar(10);
	}
}
