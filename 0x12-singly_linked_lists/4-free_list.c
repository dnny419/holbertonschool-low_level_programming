#include "lists.h"
/**
 * free_list - function that frees a list_t list.
 * @head: string - (malloc'ed string)
 *
 * Return: Nothing.
 */
void free_list(list_t *head)
{
	list_t *nextElement;
	int i;

	for (i = 0; head != NULL; i++)
	{
		nextElement = head;
		head = head->next;
		free(nextElement->str);
		free(nextElement);
	}
}
