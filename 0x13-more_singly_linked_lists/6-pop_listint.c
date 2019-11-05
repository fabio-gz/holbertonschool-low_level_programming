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
		return (-1);
	}
	new = (*head)->next;
	i = (*head)->n;
	free(*head);
	*head = new;

	return (i);
}
