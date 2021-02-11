#include "holberton.h"
/**
* more_numbers - Short description, single line
* main - print more numbers
* Description: 0 to 14 x10 times followed by new line
* Return: void
*/
void more_numbers(void)
{
	int a, b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			if (b >= 10)
			{
				_putchar(b / 10 + '0');
			}

			_putchar(b % 10 + '0');
		}
		_putchar(10);
	}
}
