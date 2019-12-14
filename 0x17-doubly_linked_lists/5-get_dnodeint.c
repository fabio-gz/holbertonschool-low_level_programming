#include "lists.h"
/**
 *get_dnodeint_at_index - get the nth node of a list
 *@head: head of list
 *@index: node index
 *Return: node or NULL if dont exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp = head;
	unsigned int i = 0;

	while (tmp != NULL)
	{
		if (i == index)
		{
			return (tmp);
		}
		i++;
		tmp = tmp->next;
	}
	return (NULL);
}
