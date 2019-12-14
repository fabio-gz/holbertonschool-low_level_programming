#include "lists.h"
/**
 *free_dlistint - free the list
 *@head: head of list
 */
void free_dlistint(dlistint_t *head)
{
	if (head != NULL)
	{
		free_dlistint(head->next);
	}
	free(head);
}
