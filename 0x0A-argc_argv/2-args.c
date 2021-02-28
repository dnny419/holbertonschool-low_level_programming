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
	printf("%s\n", argv[0]);
	return (0);
}