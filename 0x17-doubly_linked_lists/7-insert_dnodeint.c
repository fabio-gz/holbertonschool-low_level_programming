#include "lists.h"
/**
 *insert_dnodeint_at_index - insert node at given position
 *@h: pointer to head
 *@idx: node position
 *@n: node data
 *Return: new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *tail, *tmp = *h;
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	while (i < idx)
	{
		tail = tmp;
		tmp = tmp->next;
		i++;
	}

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	new->prev = tail;
	new->next = tmp;
	tail->next = new;
	if (tmp != NULL)
		tmp->prev = new;

	return (new);
}
