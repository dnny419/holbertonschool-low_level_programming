#include <stdio.h>
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
		if (a <= 99)
		{
			if (((a % 5) == 0) && ((a % 3) == 0))
			{
				printf("FizzBuzz ");
			}
			if (((a % 3) == 0))
			{
				printf("Fizz ");
			}
			else if (((a % 5) == 0))
			{
				printf("Buzz ");
			}
			else
			{
				printf("%d ", a);
			}
		}
		else
		{
			printf("Buzz");
		}
	}
	putchar(32);
	return (0);
}
