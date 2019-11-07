#include "lists.h"
/**
 *delete_nodeint_at_index - delete node at index
 *@head: pointer to head of list
 *@index: index to delete
 *Return: 1 for success, -1 for failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp;
	listint_t *new;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	tmp = *head;
	if (index == 0)
	{
		*head = tmp->next;
		free(tmp);
		return (1);
	}

	for (i = 0; tmp != NULL && i < index - 1; i++)
	{
		tmp = tmp->next;
	}

	if (tmp == NULL || tmp->next == NULL)
		return (-1);

	new = tmp->next->next;
	free(tmp->next);
	tmp->next = new;

	return (1);
}
