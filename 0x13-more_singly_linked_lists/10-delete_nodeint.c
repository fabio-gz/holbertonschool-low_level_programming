#include "lists.h"
/**
 *pop_listint - deletes a node
 *@head: pointer to head of list
 *Return: node's data
 */
int pop_listint(listint_t **head)
{
	int i = -1;
	listint_t *new = NULL;

	if (*head == NULL)
	{
		return (0);
	}
	new = (*head)->next;
	i = (*head)->n;
	free(*head);
	*head = new;

	return (i);
}

/**
 *delete_nodeint_at_index - delete node at index
 *@head: pointer to head of list
 *@index: index to delete
 *Return: 1 for success, -1 for failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	int res = 1;
	listint_t *curr = *head;
	listint_t *tmp = NULL;

	if (index == 0)
		return (pop_listint(head));

	for (i = 0; i < index - 1; i++)
	{
		if (curr->next == NULL)
			return (-1);

		curr = curr->next;
	}
	tmp = curr->next;
	res = tmp->n;
	curr->next = tmp->next;
	free(tmp);

	return (res);
}
