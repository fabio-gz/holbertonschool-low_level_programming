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
	dlistint_t *new, *tmp = *h;
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);

	while (i < idx - 1)
	{
		tmp = tmp->next;
		i++;
		if (tmp == NULL)
			return (NULL);
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	new->prev = tmp;
	new->next = tmp->next;
	tmp->next = new;
	new->next->prev = new;
	return (new);
}
