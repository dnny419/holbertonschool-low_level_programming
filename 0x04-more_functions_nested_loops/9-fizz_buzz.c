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
		if ((a % 3) == 0 && (a % 5) != 0)
		{
			printf("Fizz ");
		}
		else if ((a % 5) == 0 && (a % 3) != 0)
		{
			printf("Buzz ");
		}
		else if ((a % 5) == 0 && (a % 3) == 0)
		{
			printf("FizzBuzz ");
		}
		else
		{
			printf("%d ", a);
		}
	}
	printf("\n");
	return (0);
}
