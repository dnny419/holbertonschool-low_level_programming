#include <stdio.h>
/**
 * main - tebahpla
 * Description: use putchar
 * Return: void
*/
int main(void)
{
	char ch;

	for (ch = 122; ch >= 97; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}

