#include <stdio.h>
/**
 * main - program that prints all arguments it receives.
 * @argc: number of arguments
 * @argv: ptr array
 *
 * Return: main
*/
int main(int argc __attribute__((unused)), char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
