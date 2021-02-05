#include <stdio.h>
/**
 * main - alphabet 3
 * Description: delete two letters
 * Return: void
*/
int main(void)
{
	char a;

	for (a = 'a' ; a <= 'z' ; a++)
	{
		if (a != 'e' && a != 'q')
		{
			putchar(a);
		}
	}
	putchar('\n');
	return (0);
}
