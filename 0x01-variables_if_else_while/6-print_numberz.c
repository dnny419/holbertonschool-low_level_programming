#include <stdio.h>

/**
 * main - Program that prints numbers (0 - 10) without char
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar(num);
	}
	putchar(10);
return (0);
}

