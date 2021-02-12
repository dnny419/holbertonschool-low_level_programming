#include <stdio.h>
#include "holberton.h"
/**
* main - Program that prints the Fizz-Buzz test
* Description: The “Fizz-Buzz test”
* Return: Always 0 (Success)
*/
int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if (((a % 3) == 0) && ((a % 5) != 0))
		{
			printf("Fizz");
			putchar(32);
		}
		else if (((a % 5) == 0) && ((a % 3) != 0))
		{
			printf("Buzz");
			putchar(32);
		}
		else if (((a % 5) == 0) && ((a % 3) == 0))
		{
			printf("FizzBuzz");
			if (a < 99)
			{
				putchar(32);
			}
		}
		else
		{
			printf("%d ", a);
		}
	}
	putchar(32);
	return (0);
}
