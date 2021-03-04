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
	size_t i, j, k, sum;
	char *a;

	if (s1 == NULL)
		i = 0;
	else
		for (i = 0; s1[i] != '\0'; i++)
			;
	if (s2 == NULL)
		j = 0;
	else
		for (j = 0; s2[j] != '\0'; j++)
			;
	/*---------- do not mind me, just spacing here! ----------*/
	if (j > n)
		j = n;
	a = malloc(i + j + 1 * sizeof(char));
	if (a == NULL) /*failing to allocate memory */
		return (NULL);
	for (k = 0; k < i; k++)
		a[k] = s1[k];
	for (k = 0; k < j; k++)
		a[i + k] = s2[k];
	a[i + j] = '\0';

	return (a);
}
