#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>
/**
 * main - calculator
 * @argc: num args
 * @argv: args
 * Return: int
 */
int main(int argc, char *argv[])
{
	int a, b;
	int (*operator)(int a, int b);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	operator= get_op_func(argv[2]);

	if (operator== NULL)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", operator(a, b));
	return (0);
}
