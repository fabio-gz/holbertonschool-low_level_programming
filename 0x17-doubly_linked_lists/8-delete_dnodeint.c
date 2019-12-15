#include "lists.h"
/**
 *delete_dnodeint_at_index - delete node at index
 *@head: pointer to head
 *@index: node index
 *Return: 1 if success, -1 if fail
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *new, *tmp = *head;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = tmp->next;
		free(tmp);
		return (1);
	}

	while (tmp != NULL && i < (index - 1))
	{
		tmp = tmp->next;
		i++;
	}

	if (tmp == NULL || tmp->next == NULL)
		return (-1);

	new = tmp->next->next;
	free(tmp->next);
	tmp->next = new;
	return (1);
}
