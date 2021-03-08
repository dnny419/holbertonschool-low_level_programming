#include <stdio.h>
/**
 * main - program that prints the name of the file it was compiled from,
 * followed by a new line.
 *
 * Return: 0.
 */
#define FILE_NAME() \
	printf("%s\n", __FILE__)

int main(void)
{
	FILE_NAME();
	return (0);
}
