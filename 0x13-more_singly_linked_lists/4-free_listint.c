#include "lists.h"
/**
 * free_listint - function that frees a list_t list.
 * @head: string - (malloc'ed string)
 *
 * Return: Nothing.
 */
void free_listint(listint_t *head)
{
	listint_t *nextElement;
	int i;

	for (i = 0; head != NULL; i++)
	{
		nextElement = head->next;
		free(head);
		head = nextElement;
	}
}
