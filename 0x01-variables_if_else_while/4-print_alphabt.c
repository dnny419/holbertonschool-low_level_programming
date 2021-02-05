#include <stdio.h>

/**
 * main - Print the alphabet without e and q
 * Description: 2 putchar
 * Return: void
 */

int main(void)
{
	char a;
	
	for (a = 'a'; a <= 'z' ; a++)
	{
		if (a != 'e' && a != 'q')
		{
			putchar(a);
		}	
	}
	putchar(10);
return (0);
}

