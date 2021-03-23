#include "lists.h"
/**
 * free_listint2 - function that frees a list_t list.
 * @head: string - (malloc'ed string)
 *
 * Return: Nothing.
 */
void free_listint2(listint_t **head)
{
	listint_t *nextElement;
	int i;

	if (head == NULL)
		return;

	for (i = 0; *head != NULL; i++)
	{
		nextElement = (*head)->next;
		free(*head);
		*head = nextElement;
	}
}
