#include <stdio.h>
/**
* main - Program that prints the numbers from 00 to 99
*
* Return: Always 0 (Success)
*/
int main(void)
{
	for (a = 1; a <= n; a++)
	{
		if(a % 15 == 0)
		{
			printf("FizzBuzz ");
		}
		if(a % 3 == 0)
		{
			printf("Fizz ");
		}
		else if(a % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", a);
		}
	}
	return (0);
}
