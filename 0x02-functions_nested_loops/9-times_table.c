#include "holberton.h"
/**
 * times_table - Program that prints the 9 times table
 * Description: times 9 table
 * Return: void
 */
void times_table(void)
{
	int i, j, res;
	
	for (i = 0 ; i <= 9 ; i++)
	{
		for (j = 0 ; j <= 9 ; j++)
		{
			res = i * j;
			if (j == 0)
			{
				putchar(res + '0');
			}
			else if (res <= 9)
			{
				putchar(44);
				putchar(32);
				putchar(32);
				putchar(res + '0');	
			}
			else if (res >= 9)
			{
				putchar(44);
				putchar(32);
				putchar(res / 10 + '0');
				putchar(res % 10 + '0');
			}
		}
		putchar(10);
	}
}
