/**
* puts2 - print every other character of a string
* @s: string
*
* Return: void
*/
void puts2(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{
		if(a % 2 == 0)
		{
			putchar(s[a]);
		}
	}
	putchar(10);
}
