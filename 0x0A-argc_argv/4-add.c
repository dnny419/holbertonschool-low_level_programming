#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
 * isnumber - check if ptr is an int
 *
 * @n: number check
 * Return: 1 if number, 0 otherwise
 */
int isnumber(char *n)
{
	int i;

	i = 0;
	while (n[i] != '\0')
	{
		if (isdigit(n[i]))
			i++;
		else
			return (0);
	}
	return (1);
}
/**
 * main - program that multiplies two numbers.
 * @argc: argc
 * @argv: argv
 *
 * Return: main
*/
int main(int argc, char *argv[])
{
	int i, sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (isnumber(argv[i]))
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
