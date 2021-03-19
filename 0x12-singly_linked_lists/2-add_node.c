#include "lists.h"
/**
 * _strlen - function that gets the length of a string
 * @str: string
 * Return: length of the string
 */
unsigned int _strlen(char *str)
{
	unsigned int i;

	for (i = 0; str[i]; i++)
		;

	return (i);
}
/**
 * add_node - function that adds a new node at the end of a list_t list
 * @head: head
 * @str: string
 * Return: the number of nodes
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (0);
	}

	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}

	new->len = _strlen(new->str);
	new->next = *head;
	*head = new;

	return (new);
}
