#include "lists.h"
/**
 *insert_nodeint_at_index - insert node at given position
 *@head: pointer to head of list
 *@idx: index for new node
 *@n: node data
 *Return: address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp = *head;
	listint_t *new;
	unsigned int i;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	for (i = 1; i < idx; i++)
	{
		tmp = tmp->next;
	}
	if (!(tmp->next))
		return (NULL);

	new->n = n;
	new->next = tmp->next;
	tmp->next = new;

	return (new);
}
