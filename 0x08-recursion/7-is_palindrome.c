/**
 * _strlen_recursion - count a string with recursion
 * @s: string to count
 * @s: integer to know positions
 *
 * Return: count
*/
int _strlen_recursion2(char *s, int i)
{
	if (s[i] != '\0')
	{
		return (_strlen_recursion2(s, i + 1));
	}
	else
	{
		return (i - 1);
	}
}
/**
 * ifPal - aux function to check if a
 * palindrome is a string
 * @s: string
 * @length: length of the string
 * @i: integer to increase
 *
 * Return: int
*/
int ifPal(char *s, int length, int i)
{
	if (s[i] == s[length])
	{
		return (ifPal(s, length - 1, i + 1));
	}
	else if (s[i] == s[length] || i > length)
	{
		return (1);
	}
	else if (s[i] != s[length])
	{
		return (0);
	}
	else
	{
		return (0);
	}
}
/**
 * is_palindrome - function to check if a
 * palindrome is a string
 * @s: string
 *
 * Return: if pal 1 otherwise 0
*/
int is_palindrome(char *s)
{
	int length;

	length = _strlen_recursion2(s, 0);
	return (ifPal(s, length, 0));
}
