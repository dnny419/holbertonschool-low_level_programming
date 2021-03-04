#include <stdlib.h>
/**
 * string_nconcat - function that concatenates two strings
 * @s1: string
 * @s2: string
 * @n: integer
 *
 * Return: NULL otherwise a.
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t lenght = 0, lenght2 = 0, i, j = 0;
	char *a;

	if (s1 == NULL || s1 == '\0')
		lenght = 0;
	else
		for (i = 0; s1[i] != '\0'; i++)
			lenght++;
	if (s2 == NULL || s2 == '\0')
		lenght2 = 0;
	else
		for (i = 0; s2[i] != '\0'; i++)
			lenght2++;
	/*---------- do not mind me, just spacing! ----------*/
	if (n >= lenght2)
		n = lenght2;
	a = malloc(sizeof(char) * (lenght + n + 1));
	if (a == NULL)
		return (NULL);
	for (i = 0; i < lenght; i++)
		a[i] = s1[i];
	for (i = lenght; i < lenght + n; i++, j++)
		a[i] = s2[j];
	a[lenght + n] = '\0';
	return (a);
}
