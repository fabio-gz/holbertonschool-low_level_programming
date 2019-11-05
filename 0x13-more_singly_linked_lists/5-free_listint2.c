#include "lists.h"
/**
 *free_listint2 - frees a list
 *@head: pointer to the head of list
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp = *head;
	listint_t *next;

	*head = NULL;
	while (tmp != NULL)
	{
		next = tmp->next;
		free(tmp);
		tmp = next;
	}
}
