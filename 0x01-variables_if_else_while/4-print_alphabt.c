#include <stdio.h>
/**
 * main - Print the alphabet without e and q
 * Description: putchar
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
	putchar('\n');
	return (0);
}
