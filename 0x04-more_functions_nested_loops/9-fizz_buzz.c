#include <stdio.h>
/**
* main - Program that prints the Fizz-Buzz test
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int a, b, n = 100;

	for (a = 1; a <= n; a++)
	{
		if ((a % 15) == 0)
		{
			printf("FizzBuzz");
			if (a  < n)
			{
				putchar(32);
			}
		}
		else if ((a % 3) == 0)
		{
			printf("Fizz");
			putchar(32);
		}
		else if ((a % 5) == 0)
		{
			printf("Buzz");
			putchar(32);
		}
		else
		{
			printf("%d ", a);
		}
	}
	return (0);
}
