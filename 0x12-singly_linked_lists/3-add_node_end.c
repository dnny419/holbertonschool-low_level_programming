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
 * add_node_end - function that adds a new node at the end of a list_t list
 * @head: double head pointer
 * @str: string
 * Return: the number of nodes
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *tmp;
	int i;

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
	new->next = NULL;
	if (!*head)
	{
		*head = new;
		return (new);
	}

	tmp = *head;
	for (i = 0; tmp->next != NULL; i++)
	{
		tmp = tmp->next;
	}

	tmp->next = new;

	return (new);
}
