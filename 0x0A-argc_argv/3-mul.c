#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that multiplies two numbers.
 * @argc: argc
 * @argv: argv
 *
 * Return: main
*/
int main(int argc __attribute__((unused)), char *argv[])
{
	int value1, value2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		value1 = atoi(argv[1]);
		value2 = atoi(argv[2]);
		result = value1 * value2;
		printf("%d\n", result);
		return (0);
	}
}
