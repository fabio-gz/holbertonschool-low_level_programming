#include "lists.h"
/**
 *free_listint - free the list
 *@head: pointer to structure
 */
void free_listint(listint_t *head)
{
	if (head != NULL)
	{
		free_listint(head->next);
	}
	free(head);
}
