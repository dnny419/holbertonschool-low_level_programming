#include <stdio.h>

/**
 * main - Program that prints the numbers from 00 to 99
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int ch;
	int ch2;

	for (ch = 48; ch <= 57; ch++)
	{
		for (ch2 = 48; ch2 <= 57; ch2++)
		{
		putchar(ch);
		putchar(ch2);
		if (ch == 57 && ch2 == 57)
		{
			putchar(10);
		}
		else
		{
			putchar(44);
			putchar(32);
		}
		}
	}
return (0);
}
