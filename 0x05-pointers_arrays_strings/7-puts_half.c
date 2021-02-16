/**
* puts_half - print half of a string
* @str: string
*
* Return: void
*/
puts_half(char *str)
{
    int a, k;
    int length;
    int length2;

    length = _strlen(s) / 2;
    length2 = _strlen(s);

    for(a = length, k = 0; a <= length2; a++, k++)
    {
	    putchar(s[a]);
    }
    putchar('\n');
}

int _strlen(char *s)
{
	int a;

	while (s[a] != '\0')
	{
		a++;
	}
	return (a);
}
