#include <stdio.h>
/**
 * main - program that prints the number of arguments passed into it.
 * @argc: number of arguments
 * @argv: ptr array
 *
 * Return: main
*/
int main(int argc, char *argv[])
{
	int result = argc - 1;
	(void) argv;
    printf("%d\n", result);
	return (0);
}
