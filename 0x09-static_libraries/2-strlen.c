/**
* _strlen - get a string lenght
* @s: string
*
* Return: a
*/
int _strlen(char *s)
{
	int a;

	while (s[a] != '\0')
	{
		a++;
	}
	return (a);
}