/**
* print_rev - print a string, followed by a new line
* @s: string
*
* Return: void
*/
void print_rev(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{
		_putchar(s[a]);
	}
	_putchar('\n');
}
